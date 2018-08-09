import java.util.Scanner;

public class Shift {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int na=sc.nextInt();
		int sa=sc.nextInt();
		int[] aa=new int[n];
		for(int i=0;i<n;i++)
		{
			aa[i]=sc.nextInt();
		}
		for(int i=0;i<s;i++)
		{
			rotate(aa);
		}
		for(int x:aa)
			System.out.print(x+" ");
	}
	static void rotate(int[] arr)
	{
		int temp=0;
		int l=arr.length;
		temp=arr[l-1];
		for(int y=l-1;y>0;y--)
		{
			arr[y]=arr[y-1];
		}
		arr[0]=temp;
	}

}
