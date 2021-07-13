import java.util.Scanner;

class Main {
    public static int faktoryel(int x){
        int total=1;
        for (int i=x; i>0 ; i--){
            total*=i;
        }
        return total;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Hangi sayinin faktoryeli alinsin: ");
        int input = Math.abs(scanner.nextInt());
        scanner.close();
        System.out.println(input+"! = "+faktoryel(input));
    }
}
