class Box {
    protected double length;
    protected double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double findArea() {
        return length * breadth;
    }
}

class Box3d extends Box {
    private double height;

    public Box3d(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double findVolume() {
        return findArea() * height;
    }
}

public class InheritanceDemo {
    public static void main(String[] args) {
        Box3d myBox = new Box3d(5.0, 4.0, 3.0);
        
        System.out.println("Surface Base Area: " + myBox.findArea());
        System.out.println("Total Volume: " + myBox.findVolume());
    }
}
