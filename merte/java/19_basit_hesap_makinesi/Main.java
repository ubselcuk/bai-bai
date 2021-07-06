import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Islem secin (+ - * /):");
        String islem = scanner.nextLine(); //* Islem turunu belirtme
        System.out.print("1. Sayı:");
        double numberOne = scanner.nextDouble();
        System.out.print("2. Sayı:");
        double numberTwo = scanner.nextDouble();
        scanner.close();

        switch (islem) {
            case "+":
                System.out.println("Sonuc: "+(numberOne+numberTwo));
                break;
                
            case "-":
                System.out.println("Sonuc: "+(numberOne-numberTwo));
                break;
        
            case "*":
                System.out.println("Sonuc: "+(numberOne*numberTwo));
                break;
        
            case "/":
                System.out.println("Sonuc: "+(numberOne/numberTwo));
                break;
            
            default:
                System.out.println("Kardess isleminde bir sey kalmıs heaa");
                break;
        }


    }
}
