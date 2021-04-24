import java.io.*;
import java.util.*;

public class Main{
    public static void main(String []args){
        int n;
        Scanner sc=new Scanner(System.in);
        int k;
        n=sc.nextInt();
        k=sc.nextInt();
        int c[][];
        int i,j;
        c = new int[n+1][n+1];
        for(i=0;i<=n;i++){
            for(j=0;j<=Math.min(i,k);j++){
                if(j==0 || j==i)
                    c[i][j]=1;
                else{
                    c[i][j]=c[i-1][j-1]+c[i-1][j];
                }
            }
        }
        System.out.println(c[n][k]);
    }
}
