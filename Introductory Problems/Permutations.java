import java.util.Scanner;
 
public class Permutations {
    public static void main(String [] a){
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int n = sc.nextInt();
 
        if(n==2 || n==3){
            System.out.println("NO SOLUTION");
            return;
        }
        for(int i=2; i<=n; i+=2){
            sb.append(i+" ");
        }
        for(int i=1; i<=n; i+=2){
            sb.append(i+" ");
        }
        System.out.println(sb);
    }
}