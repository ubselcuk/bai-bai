import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Birince sayiyi girin: ");
        double firstNumber = scanner.nextDouble();
        System.out.print("Ikinci sayiyi girin: ");
        double secondNumber = scanner.nextDouble();
        scanner.close();
        System.out.println("Toplam = "+(firstNumber+secondNumber));
    }
}