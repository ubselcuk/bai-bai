import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long sayi, biggest=0;
        for (int i = 1; i <= 3; i++) {
            System.out.print(i + ". Sayiyi girin: ");
            sayi = scanner.nextInt();
            if (sayi > biggest)
                biggest = sayi;
        }
        scanner.close();
        System.out.println("Girilen en buyuk sayi: " + biggest);
    }
}
