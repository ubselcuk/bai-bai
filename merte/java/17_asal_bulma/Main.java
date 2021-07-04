import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Bir sayi girin: ");
        int input = scanner.nextInt();
        scanner.close();
        boolean flag = true;
        if(input >= 2){
            for (int i=2; i<input; i++){
                if (input%i== 0){
                    flag=false;
                    break;
                }
            }
        }
        if (flag && input!=1)
            System.out.println(input+" bir asal sayi!");
        else
            System.out.println(input+" bir asal sayi degil :(");
    }
}
