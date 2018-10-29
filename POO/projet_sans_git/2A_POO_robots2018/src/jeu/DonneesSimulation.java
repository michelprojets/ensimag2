import java.util.ArrayList

public class DonneesSimulation{
	
	private final int NBLIGNES = 20;
	private final int NBCOLONNES = 20;
	private Carte carte;
	private ArrayList<Robot> listeRobots;
	private ArrayList<Incendie> listeIncendies;
	
	public DonneesSimulation(){
		this.listeIncendies = new ArrayList<Incendie>();
		this.listeRobots = new ArrayList<Robot>();
		this.carte = new Carte(NBLIGNES, NBCOLONNES);
	}
	
}