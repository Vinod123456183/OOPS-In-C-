// instead of multiple inheritance we use interface Followed by Implements keyword

interface A {
    final int a = 10;
    int dis(int a, int b);
}

class Rect implements A {
    public int dis(int a, int b) {
        return 2 * (a + b);
    }
}

class Circle implements A {     // just example , there is No formulaof Circle as this 
    public int dis(int a, int b) {
        return (10 * a * b);
    }
}

class Main {
    public static void main(String[] args) {
        Rect r = new Rect();
        Circle c = new Circle();
        int rectDistance = r.dis(5, 7);
        int circleDistance = c.dis(3, 4);

        System.out.println("For Rectangle: " + rectDistance);
        System.out.println("For Circle: " + circleDistance);
    }
}
