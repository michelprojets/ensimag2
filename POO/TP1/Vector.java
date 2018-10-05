import java.lang.StringBuilder;

public class Vector {

    private Rational[] tabRational;

    public Vector(Rational[] tabRational) throws Exception{
        // pas de partage de référence
        this.tabRational = new Rational[tabRational.length];
        for (int i=0; i<tabRational.length; ++i){
            this.tabRational[i] = new Rational(tabRational[i].getNum(),
                                                tabRational[i].getDenom());
        }
    }

    public String toString(){
        StringBuilder res = new StringBuilder("(");
        for (Rational elem : this.tabRational){
            res.append(" ");
            res.append(elem.toString());
            res.append(",");
        }
        res.deleteCharAt(res.lastIndexOf(",")); // remove the last ","
        res.append(" )");
        return res.toString();
    }

}
