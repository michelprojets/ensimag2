public class Appli{

    public static void main(String[] args){
        Rational nb = null;
        Rational nb_faux = null;
        Rational nb1 = null;
        Rational nb2 = null;
        Rational nb_res = null;
        try{
            // 3/2
            nb = new Rational(3, 2);
            System.out.println(nb);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        try {
            // division par zero 3/0
            nb_faux = new Rational(3, 0);
            System.out.println(nb_faux);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        try {
            // 3/2*1/3 = 3/6
            nb2 = new Rational(1, 3);
            nb.mult(nb2);
            System.out.println(nb);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        try {
            // 3/6+1/3 = 15/18
            nb.add(nb2);
            System.out.println(nb);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        try {
            // utilisation methode de classe
            // 1/3*1/3 = 1/9
            nb1 = new Rational(1, 3);
            nb2 = new Rational(1, 3);
            nb_res = Rational.mult(nb1, nb2);
            System.out.println(nb_res);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}
