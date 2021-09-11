import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int counter=1;
        double total=0;
        System.out.println("-1 yazana kadar aritmetik bulunacak..");
        while (true) {
            System.out.print(counter+". Sayiyi girin: ");
            double input = scanner.nextDouble();
            if (input == -1)
                break;
            counter++;
            total+=input;
        }
        scanner.close();
        System.out.println("Aritmetik ortalama: " + total/(counter-1));
    }
}
