package ca2;

abstract class Sayhello {
    abstract void greet();
}

class India extends Sayhello {
    @Override
    void greet() {
        System.out.println("India: Namaste");
    }
}
class Spain extends Sayhello {
    @Override
    void greet() {
        System.out.println("Spain: Hola");
    }
}


public class Sayhellotest {
    public static void main(String[] args) {
        India i = new India();
        Spain s = new Spain();
        i.greet();
        s.greet();
    }
}
