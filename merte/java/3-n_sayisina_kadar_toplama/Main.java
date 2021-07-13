import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Bir pozitif sayi girin: ");
        int input = scanner.nextInt();
        scanner.close();
        
        if (input > 0) {
            int total=0;
            for (int i=input; i>0 ; i--)
                total+=i;
            System.out.println(input + "'a kadar olan sayilarin toplami: " + total);
        } else {
            System.out.println("Lutfen pozitif bir sayi secin!");
        }
    }
}
