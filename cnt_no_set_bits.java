import java.util.Scanner;
class cnt_no_set_bits {
    public static void main(String[] args){
    int x;
    int cnt=0;
    Scanner sc = new Scanner(System.in);
    x=sc.nextInt();
    while(x!=0){
        x=x&(x-1);
        cnt=cnt+1;
    }  
    System.out.println(cnt);
}
}
