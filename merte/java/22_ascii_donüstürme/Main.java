import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Metin girin:");
        String metin = scanner.nextLine();
        scanner.close();

        char[] chars = new char[metin.length()];
        for (int i = 0; i < metin.length(); i++) {
            chars[i] = metin.charAt(i);
        }

        for (char c : chars) {
            int ascii = (int) c;
            System.out.println(c+": "+ascii);
        }
    }
}