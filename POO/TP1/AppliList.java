public class AppliList{

    public static void main(String[] args){
        int taille = 10;
        Rational[] tabRational = new Rational[taille];
        try{
            for (int i=0; i<10; ++i){
                tabRational[i] = new Rational(1, i+1);
            }
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
        try{
            Vector vector = new Vector(tabRational);
            System.out.println(vector);
        }
        catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}
