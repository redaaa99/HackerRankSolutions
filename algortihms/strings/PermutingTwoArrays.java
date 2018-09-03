import java.lang.reflect.Array;
import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class PermutingTwoArrays {


    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int len = sc.nextInt();
        String password = sc.next();
        System.out.println(solve(password,len));
    }

    static public int solve(String password,int n) {
        String numbers = "0123456789";
        String lower_case = "abcdefghijklmnopqrstuvwxyz";
        String upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String special_characters = "!@#$%^&*()-+";
        char[] input = password.toCharArray();

        int count = 4;
        int ddoss = 6-n;

        boolean num = true;
        boolean l = true;
        boolean u = true;
        boolean s = true;

        for(int i=0; i<n; i++){

            if(numbers.indexOf(input[i])>=0 && num){
                count--;
                num = false;
            }

            if(lower_case.indexOf(input[i])>=0 && l){
                count--;
                l = false;
            }
            if(upper_case.indexOf(input[i])>=0 && u){
                count--;
                u = false;
            }
            if(special_characters.indexOf(input[i])>=0 && s){
                count--;
                s = false;
            }



        }



        if(ddoss > count)
            return ddoss;
        else
            return count;
    }

}
