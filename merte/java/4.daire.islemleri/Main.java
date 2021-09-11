import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Yaricap girin: ");
        float r = scanner.nextFloat();
        final double pi = Math.PI;
        scanner.close();

        double alan = pi*Math.pow(r, 2);
        double cevre = 2*pi*r;

        System.out.println("Alan: "+ alan);
        System.out.println("Cevre: "+cevre);
    }    
}