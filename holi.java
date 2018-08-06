import java.util.Scanner;
public class Holiday {
	public static void main(String args[])
	{
		Scanner scc = new Scanner(System.in);
		String sa;
		sa=scc.next().toLowerCase();
		if(sa.equals("sunday") || sa.equals("saturday")) 
			System.out.println("yes");
		
		else 
			System.out.println("no");
		
	}
}
