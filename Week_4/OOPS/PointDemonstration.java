class Point {
    private int x;
    private int y;

    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void printPoint() {
        System.out.println("Point coordinates: (" + x + ", " + y + ")");
    }
}

public class PointDemonstration {
    public static void main(String[] args) {
        Point p1 = new Point();
        Point p2 = new Point(10, 20);

        p1.setX(5);
        p1.setY(8);
        p1.printPoint();

        p2.setXY(15, 30);
        p2.printPoint();
    }
}
