import java.util.Random;

public enum Direction {
	
	NORD(-1, 0),
	SUD(1, 0),
	EST(0, 1),
	OUEST(0, -1);
	  
	// d�placement relatif de la direction
	private final int dx, dy;

	private Direction(int dx, int dy) {
		this.dx = dx; this.dy = dy;
	}

	/** Retourne le d�placement sur l'axe des x correspondant � la
	 * direction courante.
	 * @return le d�placement en x
	 */
	public int getDx() {
		return dx;
	}

	/** Retourne le d�placement sur l'axe des y correspondant � la
	 * direction courante.
	 * @return le d�placement en y
	 */
	public int getDy() {
		return dy;
	}
	
	/** Retourne une direction inverse � la direction courante.
	 * @return la direction oppos�e
	 */
	public Direction inverser() {
		return Direction.values()[(this.ordinal() + 4) % 8];
	}

}
