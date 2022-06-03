import java.util.Scanner;
 
public class Repititions {
    public static void main(String[] args){
        String str;
        Scanner in = new Scanner(System.in);
        str = in.next();
        int curr=1, ans=1;
        for(int i=1; i<str.length(); i++){
            if(str.charAt(i)==str.charAt(i-1)){
                curr++;
            }
            else{
                ans = Math.max(curr,ans);
                curr=1;
            }
        }
        ans = Math.max(ans,curr);
        System.out.println(ans);
    }
}