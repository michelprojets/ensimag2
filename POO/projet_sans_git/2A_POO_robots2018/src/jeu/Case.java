pubilc class Case{
	
	private int ligne;
	private int colonne;
	private NatureTerrain nature;
	
	public Case(int ligne, int colonne, NatureTerrain nature){
		this.ligne = ligne;
		this.colonne = colonne;
		this.nature = nature;
	}
	
	public int getLigne(){
		return this.ligne;
	}
	
	public int getColonne(){
		return this.colonne;
	}
	
	public NatureTerrain getNature(){
		return this.getNature;
	}
	
	@override
	protected Object clone() throws CloneNotSupportedException{
		return new Case(this.ligne, this.colonne, this.nature);
	}
	
	@override
	public String toString(){
		return this.nature.getNature();
	}
	
}