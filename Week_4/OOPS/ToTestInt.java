interface Test {
    int square(int num);
}

class Arithmetic implements Test {
    @Override
    public int square(int num) {
        return num * num;
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic arithmeticObj = new Arithmetic();
        int result = arithmeticObj.square(5);
        System.out.println("Square of 5 is: " + result);
    }
}
