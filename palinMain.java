import java.util.Scanner;

public class palinMain {
    public static void main(String[] args) {
        System.out.println("Input the string you want to reverse");
        Scanner scanInput = new Scanner(System.in);
        String temp = scanInput.next();
        char[] tempChars = temp.toCharArray();
//        for (int i = 0; i < tempChars.length/2; i++){
//            char tempChar = tempChars[i];
//            tempChars[i] = tempChars[tempChars.length-1-i];
//            tempChars[tempChars.length-1-i] = tempChar;
//        }
        temp = tempChars.toString();
        System.out.println("Your reversed string is " + temp);
    }
}
