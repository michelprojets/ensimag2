/*
 * Exemple d'utilisation de Comparable et Comparator.
 * 
 * On travaille sur les Daltons, définis par leur nom et leur taille.
 * Ils sont stockés dans un ensemble ordonné, en utilisant différents
 * moyens de définir la relation d'ordre.
 *
 * 1. la classe Dalton peut réaliser l'interface Comparable<Dalton>. Elle doit
 *    donc définir une méthode compareTo(Dalton) qui compare une instance de
 *    Dalton à un autre Dalton donné en paramètre.
 *    Ceci définit "l'ordre naturel" pour comparer deux objets de type Dalton
 *    (ici on ordonne sur la taille, puis sur le nom à taille égale)
 *     
 * 2. on peut aussi déléguer la comparaison à une tierce classe, qui définit
 *    simplement comment comparer deux Daltons. 
 *    Cette classe doit réaliser l'interface Comparator, et redéfinir une seule
 *    méthode compare(Dalton, Dalton) qui compare deux objets. 
 *    On peut créer un comparateur pour chaque ordre souhaité. Ici on en crée 
 *    deux: comparaison sur le nom uniquement et sur la taille uniquement.
 *    
 * Les méthodes de comparaisons entre deux objet o1 et o2 retournent une
 * valeur entière négative si o1 < o2, , nulle si o1 == o2 
 * ou positive si o1 > o2.
 */


import java.util.*;


public class ExempleOrdonnancement{

	public static void main(String [] args) {

		// Trois ensembles ordonnés suivant un ordre différent: 
		// - dans les deux premiers cas, on délègue la comparaison à un objet 
		//   externe de type Comparator
		// - dans le dernier, on utilise l'ordre naturel de la classe Dalton
		SortedSet<Dalton> daltonsParNom    = new TreeSet<Dalton> (new ComparateurNom());
		SortedSet<Dalton> daltonsParTaille = new TreeSet<Dalton> (new ComparateurTaille());
		SortedSet<Dalton> daltons          = new TreeSet<Dalton> ();	// ordre naturel

		Dalton joe = new Dalton("Joe", Taille.PETIT);
		Dalton jack = new Dalton("Jack", Taille.MOYEN);
		Dalton william = new Dalton("William", Taille.MOYEN);
		Dalton averell = new Dalton("Averell", Taille.BETE);

		// insertion ds un ordre quelconque, de toutes façons c'est trié
		daltonsParNom.add(william);
		daltonsParNom.add(joe);
		daltonsParNom.add(averell);
		daltonsParNom.add(jack);

		daltonsParTaille.add(william);
		daltonsParTaille.add(joe);
		daltonsParTaille.add(averell);
		daltonsParTaille.add(jack);

		daltons.add(william);
		daltons.add(joe);
		daltons.add(averell);
		daltons.add(jack);

		System.out.println("Les Daltons, ordonnés par nom: ");	
		System.out.println(daltonsParNom);
		System.out.println("  -> Bof...\n");
		
		System.out.println("Les Daltons, ordonnés par taille: " + daltonsParTaille);
		System.out.println("  -> Argh, il en manque un! (ben oui, c'est un Set!)\n");
		
		System.out.println("Les Daltons, tout court: " + daltons);
		System.out.println("  -> Là c'est mieux!\n");

		System.out.println("\n(I'm a poor lonesome teacher...)");
	}
	
}



enum Taille {
	PETIT,
	MOYEN,
	BETE
}

/**
 * Class Dalton, munie d'un ordre naturel.
 */
class Dalton implements Comparable<Dalton> {
	private String nom;
	private Taille taille;
	
	public Dalton(String nom, Taille taille) {
		this.nom = nom;
		this.taille = taille;
	}
	
	public String getNom() {
		return nom;
	}
	
	public Taille getTaille() {
		return taille;
	}

	@Override
	public String toString() {
		return nom + (" (") + taille.toString() + ")";
	}
	
	/**
	 * Ordre naturel: comparaison sur la taille d'abord, puis
	 * sur le nom.
	 * @return une valeur négative / nulle / positive si this est 
	 *         plus petit / égal / plus grand que d.
	 */
	@Override
	public int compareTo(Dalton d) {
		if (d == null)
			throw new NullPointerException(); 
		
		int dt = this.taille.ordinal() - d.taille.ordinal(); // ordre ds l'enum
		if (dt < 0)	{			// this < d
			return -1;
		} else if  (dt > 0)	{	// this > d
			return 1;
		} else {	// même taille, on compare sur le nom
			        // (String realise Comparable<String>)
			return this.nom.compareTo(d.nom);
		}
	}
	
	
//  A partir du moment où une classe réalise Comparable, il est fortement 
//	recommandé de redéfinir equals (et hashCode) de maniere cohérente
//	par rapport à cet ordre:
//	   	o1.compareTo(o2) == 0   doit être identique à   o1.equals(o2)
//		si o1.equals(o2) == true , alors o1.hashCode() == o2.hashCode() 
	
	@Override
	public boolean equals(Object o) {
		if (o instanceof Dalton == false)	// verifie aussi o != null
			return false;
		
		Dalton d = (Dalton) o;
		return this.nom.equals(d.nom) && this.taille == d.taille;
	}

// Deux instance identiques, au sens d'equals et de compareTo,
// doivent retourner un même hashCode
	@Override
	public int hashCode() {
		// ici on délègue au nom (hashCode de String est déjà redéfinie)
		return nom.hashCode();	
	}
}


/**
 * Classe servant à comparer deux objets Dalton sur leur nom uniquement.
 */
class ComparateurNom implements Comparator<Dalton> {

	@Override
	public int compare(Dalton d0, Dalton d1) {
		return d0.getNom().compareTo(d1.getNom());
	}
}

/**
 * Classe servant à comparer deux objets Dalton sur leur taille uniquement.
 */
class ComparateurTaille implements Comparator<Dalton> {

	@Override
	public int compare(Dalton d0, Dalton d1) {
		return d0.getTaille().ordinal() - d1.getTaille().ordinal();
	}
}

