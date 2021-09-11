import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Kac tane sayidan en büyügü alinsin: ");
        byte n = (byte)Math.abs(scanner.nextByte());

        int input,biggest=0;
        for (int i=1; i<=n; i++){
            System.out.print(i+". sayiyi girin: ");
            input = scanner.nextInt();
            if (input > biggest)
                biggest=input;
        }
        scanner.close();
        System.out.println("En buyuk sayi: "+biggest);
    }
}
