package ca2;

public class Fathersproperty {
    public void letterBox() {
        System.out.println("Letter box: " +
                "Accessible to all.");
    }
    private void locker(){
        System.out.println("Locker: " +
                "Only father can access.");
    }
    protected void bedroom() {
        System.out.println("Bedroom: Only accessible to " +
                "father's family members.");
    }

    public static void main(String[] args) {
        Fathersproperty father = new Fathersproperty();

        System.out.println("Father can access:");
        father.letterBox();
        father.bedroom();
        father.locker();
    }

}

