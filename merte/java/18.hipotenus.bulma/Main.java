import java.util.Scanner;

class Main {
    static double hipotenus(double x, double y){
        return Math.sqrt((x*x)+(y*y));
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("x-axis:");
        double x = Math.abs(scanner.nextDouble());
        System.out.print("y-axis:");
        double y = Math.abs(scanner.nextDouble());
        scanner.close();

        System.out.println("["+(int)x+","+ (int)y+"] "+hipotenus(x,y));
    }
}
