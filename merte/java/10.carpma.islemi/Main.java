import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("1. Pozitif sayiyi girin: ");
        int firstNumber =scanner.nextInt();
        System.out.print("2. Pozitif sayiyi girin: ");
        int secondNumber = scanner.nextInt();
        scanner.close();

        if (firstNumber >= 0 && secondNumber >= 0) {
            int carpim=0;
            for (int i=firstNumber; i>0 ; i--)
                carpim+=secondNumber;
            System.out.println("Carpim: "+carpim);
        } else System.out.println("Lutfen sadece pozitif sayi secin!");
    }
}
