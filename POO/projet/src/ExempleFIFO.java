import java.util.*;


public class ExempleFIFO {

	public static void main(String[] args) {

		// Ex: file (FIFO) de valeurs entières 
		//     notez le Queue<Integer> et pas Queue<int>
		//  => pour les types de base, il faut utiliser des classes "wrapper"
		//     (Integer, Float, Double ...)
		Queue<Integer> file = new LinkedList<Integer> ();
		file.add(1);
		file.add(2);
		file.add(3);
		System.out.println(file.remove());	// affiche 1
		file.add(4);
		while (!file.isEmpty()) {
			System.out.println(file.remove());	// affiche 2, 3 puis 4
		}
	}

}
