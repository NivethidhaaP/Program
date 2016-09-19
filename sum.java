import java.io.*;
import java.util.*;

class Sum{
public static void main(String[] args){
int n,s=0;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
for(int i=1;i<=n;i++)
{
 s=s+i;
}
System.out.println(s);
}
}
