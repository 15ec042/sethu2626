import java.io.*;
import java.util.*;
class RepeatorUnique
{
public static void main(String args[])
{
int n;
int v=0;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
int x[]=new int[n];
for(int i=0;i<n;i++)
{
x[i]=sc.nextInt();
}
Arrays.sort(x);
for(int j=0;j<n;j++)
{
for(int k=j+1;k<n;k++)
{
if(x[j]==x[k])
{
v=1;
System.out.print(x[j]+" ");
}
}
}
if(v==0)
{
System.out.println("Unique");
}
}
}
