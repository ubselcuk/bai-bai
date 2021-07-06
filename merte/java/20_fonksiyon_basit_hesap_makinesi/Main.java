import java.util.Scanner;

class Main {
    static double toplama(double x, double y){
        return (x+y);
    }
    static double cikartma(double x, double y){
        return (x-y);
    }
    static double carpma(double x, double y){
        return (x*y);
    }
    static double bolme(double x, double y){
        return (x/y);
    }
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
                System.out.println("Sonuc: "+toplama(numberOne, numberTwo));
                break;
                
            case "-":
                System.out.println("Sonuc: "+cikartma(numberOne, numberTwo));
                break;
            
            case "*":
                System.out.println("Sonuc: "+carpma(numberOne, numberTwo));
                break;
            
            case "/":
                System.out.println("Sonuc: "+bolme(numberOne, numberTwo));
                break;
            
            default:
                System.out.println("Kardess isleminde bir sey kalmıs heaa");
                break;
        }
    }
}
