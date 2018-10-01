public class Rational{

    private int num;
    private int denom;

    // construteur
    public Rational(int num, int denom) throws Exception{
        this.num = num;
        if (denom == 0){
            throw new IllegalArgumentException("Error - Denominateur should not be equal to zero " + this);
        }
        this.denom = denom;
        if (!this.pgcdEqualsTo1()){
            throw new ArithmeticException("Error - Fraction non irreductible : " + this);
        }
    }

    // getters
    public int getNum(){
        return this.num;
    }

    public int getDenom(){
        return this.denom;
    }

    // setters
    public void setNum(int num){
        int old_num = this.num;
        this.num = num;
        if (!this.pgcdEqualsTo1()){
            this.num = old_num;
            throw new ArithmeticException("Error - Fraction non irreductible : " + this);
        }
    }

    public void setDenom(int denom){
        if (denom == 0){
            throw new IllegalArgumentException("Error - Denominateur should not be equal to zero " + this);
        }
        int old_denom = this.denom;
        this.denom = denom;
        if (!this.pgcdEqualsTo1()){
            this.denom = old_denom;
            throw new ArithmeticException("Error - Fraction non irreductible : " + this);
        }
    }

    // methode mult
    public void mult(Rational nb2) throws ArithmeticException{
        this.num *= nb2.num;
        this.denom *= nb2.denom;
        if (!this.pgcdEqualsTo1()){
            throw new ArithmeticException("Error - Fraction non irreductible : " + this);
        }
    }

    // methode add
    public void add(Rational nb2) throws ArithmeticException{
        this.num = this.num*nb2.denom + nb2.num*this.denom;
        this.denom = this.denom*nb2.denom;
        if (!this.pgcdEqualsTo1()){
            throw new ArithmeticException("Error - Fraction non irreductible : " + this);
        }
    }

    // methode de classe mult() qui surcharge l'autre mult()
    // utile si on a besoin de faire une multiplication de rationnels a partir d une autre classe
    public static Rational mult(Rational nb1, Rational nb2) throws Exception{
        Rational res = new Rational(nb1.num, nb1.denom);
        res.mult(nb2);
        return res;
    }

    // methode privee qui test l irreductibilite
    private boolean pgcdEqualsTo1(){
        return (pgcd(this.num, this.denom) == 1);
    }

    // methode privee qui calcul le pgcd
    private int pgcd(int a, int b){
        if (Math.min(a, b) == 0)
            return Math.max(a, b);
        else
            return pgcd(Math.min(a, b), Math.max(a, b)%Math.min(a, b));

    }

    // methode toString()
    public String toString(){
        return this.num + "/" + this.denom;
    }

}
