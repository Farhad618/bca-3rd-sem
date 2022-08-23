package ca2;

public class Son extends Fathersproperty{
    public static void main(String[] args) {
        Son son = new Son();

        System.out.println("Son can access:");
        son.letterBox();
        son.bedroom();
        // son.locker();
    }
}
