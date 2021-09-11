import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Bir sayi girin: ");
        int input = scanner.nextInt();
        scanner.close();
        
        int total=0;
        for (int i=Math.abs(input); i>0 ; i--)
            total+=Math.pow(i,2);
        System.out.println(input + "'a kadar olan sayilarin karesi: " + total);
    }
}
