import java.io.*;
import java.util.*;
 
class Powofnum{
 public static void main(String[] arg){
 int n,power,sum=1;
 Scanner sc = new Scanner(System.in);
 n=sc.nextInt();
 power=sc.nextInt();
 for(int i=1;i<=power;i++){
 sum=sum*n;
 }
 System.out.println(sum);
 }
 }
