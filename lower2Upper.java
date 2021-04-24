import java.io.*;
import java.util.*;

public class Main{

     public static void main(String []args){
        char c;
        int p;
        Scanner sc = new Scanner(System.in);
        c = sc.next().charAt(0);  
        p=(int)c;
        System.out.println((char)(p&(~32)));
        
     }
}
