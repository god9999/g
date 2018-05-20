import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) 
	{
		
		int n;

		Scanner scan=new Scanner(System.in);
		int i;
			n=scan.nextInt();
				int[] a=new int[n];
		for(i=0;i<n;i++)
		{
			a[i]=scan.nextInt();
		
		}
		Arrays.sort(a);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				System.out.println(a[i]);
				break;
			}
		}
	}
}
