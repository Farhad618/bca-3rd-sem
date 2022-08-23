class TimeAdd {
    int h;
    int m;
    int s;

    void insert_data(int a, int b, int c) {
        h = a;
        m = b;
        s = c;
    }

    void show_data() {
        System.out.println("Hour: " + h);
        System.out.println("Minute: " + m);
        System.out.println("Second: " + s);
    }

    void addTime(TimeAdd t, TimeAdd u){
        if ((t.s + u.s)>=60) {
            s = (t.s+u.s)%60;
            t.m++;
        } else {
            s = (t.s+u.s);
        }

        if ((t.m + u.m)>=60) {
            m = (t.m+u.m)%60;
            t.h++;
        } else {
            m = (t.m+u.m);
        }

        h = (t.h+u.h);
    }

    public static void main(String[] args) {
        TimeAdd t1 = new TimeAdd();
        TimeAdd t2 = new TimeAdd();
        TimeAdd t3 = new TimeAdd();

        t1.insert_data(2, 45, 20);
        t2.insert_data(3, 50, 55);
        // t3.insert_data(2, 45, 20);

        t3.addTime(t1, t2);
        t3.show_data();

        // System.out.println("hi");
    }
}