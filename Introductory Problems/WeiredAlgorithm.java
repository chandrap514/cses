//import java.io.*;
import java.util.Scanner;
 
public class WeiredAlgorithm {
    public static void main(String[] args){
        long n;
        Scanner sc = new Scanner(System.in);
        n = Integer.parseInt(sc.nextLine());
 
        while(n!=1){
            System.out.println(n);
            if(n%2==0) n/=2;
            else n=n*3+1;
        }
        System.out.println(1);
    }
}