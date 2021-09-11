import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Bir dogal sayi girin: ");
        int input = Math.abs(scanner.nextInt());
        scanner.close();
        
        int teklerToplami=0;
        int ciftlerToplami=0;
        while (input>0) {
            if (input%2==0)
                ciftlerToplami+=input;
            else
                teklerToplami+=input;
            --input;
        }
        System.out.println("Tekler toplami: " + teklerToplami);
        System.out.println("Ciftler toplami: " + ciftlerToplami);
    }
}
