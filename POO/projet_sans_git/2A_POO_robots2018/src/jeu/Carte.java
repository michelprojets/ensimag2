import java.util.ArrayList
import java.lang.StringBuilder

public class Carte{
	
	private ArrayList<ArrayList<Case>> listeCases;
	private int nbLignes;
	private int nbColonnes;
	private int tailleCase;
	
	public Carte(int nbLignes, int nbColonnes){
		this.nbLignes = nbLignes;
		this.nbColonnes = nbColonnes;
	}
	
	private getXVoisin(Case src, Direction dir){
		return src.getLigne() + dir.getDy();
	}
	
	private getYVoisin(Case src, Direction dir){
		return src.getColonne() + dir.getDx();
	}
	
	public int getNbLignes(){
		return this.nbLignes;
	}
	
	public int getNbColonnes(){
		return this.nbColonnes;
	}
	
	public int getTailleCases(){
		return this.tailleCase;
	}
	
	public Case getCase(int ligne, int colonne){
		return this.listeCases.get(ligne).get(colonne).clone();
	}
	
	public boolean voisinExiste(Case src, Direction dir){
		return (0 <= ligneVoisin && getXVoisin(src, dir) < this.nbLignes &&
				0 <= colonneVoisin && getYVoisin(src, dir) < this.nbColonnes);
	}
	
	public Case getVoisin(Case src, Direction dir) throws IndexOutOfBoundsException{
		if (!VoisinExiste){
			throw new IndexOutOfBoundsException("Voisin non accessible : (" +
				getXVoisin(src, dir) + ", " + getYVoisin(src, dir) + ")");
		}
		return this.listeCases.get(getYVoisin(src, dir)).get(getXVoisin(src, dir)).clone();
	}
	
	@override
	public string toString(){
		StringBuilder str = new StringBuilder();
		for (ArrayList<Case> ligne : this.listeCases){
			for (Case c : ligne){
				str.append(c.toSring);
				if (c.getColonne != this.nbLignes - 1){
					str.append(' ');
				}
			}
			if (ligne.get(0).getColonne() != this.nbColonnes){
				str.append('\n');
			}
		}
		return str;
	}

}