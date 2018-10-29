import java.util.Random;

public enum Direction {
	
	NORD(-1, 0),
	SUD(1, 0),
	EST(0, 1),
	OUEST(0, -1);
	  
	// déplacement relatif de la direction
	private final int dx, dy;

	private Direction(int dx, int dy) {
		this.dx = dx; this.dy = dy;
	}

	/** Retourne le déplacement sur l'axe des x correspondant à la
	 * direction courante.
	 * @return le déplacement en x
	 */
	public int getDx() {
		return dx;
	}

	/** Retourne le déplacement sur l'axe des y correspondant à la
	 * direction courante.
	 * @return le déplacement en y
	 */
	public int getDy() {
		return dy;
	}
	
	/** Retourne une direction inverse à la direction courante.
	 * @return la direction opposée
	 */
	public Direction inverser() {
		return Direction.values()[(this.ordinal() + 4) % 8];
	}

}
