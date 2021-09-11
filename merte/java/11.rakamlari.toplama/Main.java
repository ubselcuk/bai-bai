import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Bir sayi girin: ");
        int input = scanner.nextInt();
        scanner.close();
        
        int numbers=0;
        while (input>0){
            numbers += (input % 10);
            input /= 10;
        }
        System.out.println("Rakamlar toplami: "+numbers);
    }
}
