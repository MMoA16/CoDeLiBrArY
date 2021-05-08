import java.io.*;
import java.util.Scanner;
class pas1 {
    public static void main(String[] args){
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int k;
        k=sc.nextInt();
        int i;
        int j;
        int c[];
        c=new int[k+1];
        for(i=0;i<k;i++){
            c[i]=0;
        }
        c[0]=1;
        for(i=1;i<=n;i++){
            for(j=min(i,k);j>0;j--){
                c[j]=c[j-1]+c[j];
            }
        }
        System.out.println(c[k]);
}

    private static int min(int i, int k) {
        if(i>k)
            return k;
        else
            return i;
    }
}
