import java.util.*;

public class ExempleList {

	public static void main(String[] args) {
		// Une LinkedList de points
		LinkedList<Point> lPoints = new LinkedList<Point>();
		lPoints.add(new Point(0, 0));	// par defaut, ajout en fin
		lPoints.addFirst(new Point(1, 1));
		lPoints.add(new Point(2, 2));
		System.out.println(lPoints);	// [(1,1), (0,0), (2,2)]
		lPoints.remove(1);				// enleve la valeur en position 1
		System.out.println(lPoints);	// [(1,1), (2,2)]
		
		ArrayList<Character> lettres = new ArrayList<Character>();
		for (char c = 'a'; c <= 'z'; c++) {
			lettres.add(c);
		}
		
		// acces directs: 
		lettres.set(4, 'E');	// remplace la 5ème lettre (e) par sa majuscule
		System.out.println("La 25eme lettre est " + lettres.get(24));
		lettres.remove(6);		// cout! (decalages)
		// On affiche les 10 premières lettres
		Iterator<Character> it = lettres.iterator();
		int n = 0;
		while (it.hasNext() && n++ < 10) {
			char c = it.next();
			System.out.print(c + " ");
		}
	}
}


class Point {
	private int x, y;
	
	public Point(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	@Override
	public String toString() {
		return "(" + x + "," + y + ")";
	}
}
