class Outer {
    public void display() {
        System.out.println("Display method inside Outer class.");
    }

    class Inner {
        public void display() {
            System.out.println("Display method inside Inner class.");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Outer outerObj = new Outer();
        outerObj.display();

        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display();
    }
}
