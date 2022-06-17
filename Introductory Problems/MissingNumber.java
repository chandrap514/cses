import java.util.Scanner;
 
public class MissingNumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        n = Integer.parseInt(sc.nextLine());
        long xor=0;
        for(int i=1; i<=n; i++){
            xor^=i;
        }
 
        int x;
        for(int i=1; i<n; i++){
            x = sc.nextInt();
            xor^=x;
        }
        System.out.println(xor);
    }
}