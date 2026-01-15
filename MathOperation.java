public class MathOperation {


    public int calculate(int a, int b) {
        return a + b;
    }

    // Subtract two doubles
    public double calculate(double a, double b) {
        return a - b;
    }

    // Multiply three integers
    public int calculate(int a, int b, int c) {
        return a * b * c;
    }

    // Divide two doubles
    public double calculate(double a, double b, boolean isDivision) {
        if (b == 0) {
            System.out.println("Cannot divide by zero!");
            return 0;
        }
        return a / b;
    }

    public static void main(String[] args) {
        MathOperation m = new MathOperation();

        System.out.println("Addition (int): " + m.calculate(10, 5));
        System.out.println("Subtraction (double): " + m.calculate(15.5, 5.2));
        System.out.println("Multiplication (int): " + m.calculate(2, 3, 4));
        System.out.println("Division (double): " + m.calculate(20.0, 4.0, true));
    }
}
