import java.util.*;


public class ExempleMap {

	public static void main(String[] args) {

		// ex: dictionnaire associant des étudiants (clé, chaîne)
		// à des notes (valeurs entières)
		Map<String, Integer> annuaire = new HashMap<String, Integer> ();
		
		String mc = new String("Matthieu");
		String sb = new String("Sylvain");
		String nc = new String("Nicolas");
		annuaire.put(mc, 4);
		annuaire.put(sb, 18);
		annuaire.put(nc, 12);
		annuaire.put(mc, 14);	// pas de doublons, 
		                        // mais remplace l'ancienne valeur associée a mc
		
		// et quelle est la note de Catherine?
		Integer note = annuaire.get("Catherine");
		System.out.println("La note de Catherine est: " + note);	// null!
		
		
		// affichage avec toString();	ordre?
		System.out.println("L'annuaire contient: " + annuaire);
		
		// ensemble des clés, et des valeurs
		Set<String> cles = annuaire.keySet();
		System.out.println("Les clés sont: " + cles);
		
		// collection des valeurs
		Collection<Integer> notes = annuaire.values();
		System.out.println("Les valeurs sont: " + notes);
		
		// parcours avec un itérateur sur les couples
		// (prévoir une aspirine pour la syntaxe...)
		System.out.println("Les couples sont:");
		Set<Map.Entry<String, Integer>> couples = annuaire.entrySet();
		Iterator<Map.Entry<String, Integer>> itCouples = couples.iterator();
		while (itCouples.hasNext()) {
			Map.Entry<String, Integer> couple = itCouples.next();
			System.out.println("\t" + couple.getKey() + " a la note " + couple.getValue());
		}

	}
}
