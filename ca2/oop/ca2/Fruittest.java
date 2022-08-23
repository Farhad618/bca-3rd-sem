package ca2;

//super class
class Fruit {
    float sweetness;
    int[] color;
    void setColor(int r, int g, int b) {
        color = new int[]{r, g, b};
    }
    Fruit(float s, int[] c) {
        sweetness = s;
        setColor(c[0], c[1], c[2]);
    }
}

//subclass
class Mango extends Fruit {
    String name;
    Mango(float x, int[] y, String z) {
        super(x, y);
        name = z;
    }
    void display(){
        System.out.println("Name: " + name);
        System.out.println("Sweetness: " + sweetness);
        System.out.print("Color: R=" + color[0] + ", G="
                + color[1] + ", B=" + color[2]);

    }
}

public class Fruittest {
    public static void main(String[] args) {
        Mango m1 = new Mango(9.8f, new int[]{255, 255, 0}, "m1");
        m1.display();
    }
}

