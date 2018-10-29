public enum NatureTerrain{
	
	EAU("EAU"),
	FORET("FORET"),
	ROCHE("ROCHE"),
	TERRAIN_LIBRE("TERRAIN_LIBRE"),
	HABITAT("HABITAT");
	
	private final String nature;
	
	private NatureTerrain(String nature){
		this.nature = nature;
	}

	public String getNomNature(){
		return this.nature;
	}
	
}