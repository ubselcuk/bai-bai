import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Vize notunuzu girin: ");
        float vize = scanner.nextFloat();
        System.out.print("Final notunuzu girin: ");
        float _final = scanner.nextFloat();
        scanner.close();
        
        if (0 <= _final && _final <= 100 && 0 <= vize && vize <= 100 ) {
            float sonuc = ((vize/100)*40)+((_final/100)*60);
            if (sonuc >= 70) {
                System.out.println("Tebrikler! basariyla gectin");
                System.out.println("Yıl sonu notun: "+sonuc);
            }
            else {
                System.out.println("Maalesef Kaldin.");
                System.out.println("Yıl sonu notun: "+sonuc);
            }
        }
        else
            System.out.println("Girdiginiz notlar hatali.");
    }
}