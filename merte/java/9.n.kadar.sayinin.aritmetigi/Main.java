import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Kac tane sayinin aritmetik ortalamasi alinsin: ");
        byte n = (byte)Math.abs(scanner.nextByte());

        double toplam=0;
        for (int i=1; i<=n; i++){
            System.out.print(i+". sayiyi girin: ");
            toplam += scanner.nextDouble();
        }
        scanner.close();
        System.out.println("Ortalama: "+(toplam/n));
    }
}
