import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Kulenin uzunlugu kac olsun: ");
        short height = scanner.nextShort();
        scanner.close();
        
        for (int i=1; i<=height; i++){
            String stars = "*".repeat(i);
            System.out.println(stars);
        }
    }
}
