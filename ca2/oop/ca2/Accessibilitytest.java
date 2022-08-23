package ca2;

public class Accessibilitytest {
    public int a;
    private int b;
    protected int c;

    public static void main(String[] args) {
//        Accessibilitytest a = new Accessibilitytest();
        Bclass bc = new Bclass();
        Someotherclass s = new Someotherclass();
        s.changeValue();
//        s.c = 20;
    }
}

class Bclass extends Accessibilitytest {

}

class Someotherclass {
    Accessibilitytest ac = new Accessibilitytest();

    void changeValue() {
        ac.c = 10;

    }

}