import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n;
        int mul=0;
        int max;
        n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                mul=1;
                for(int k=i;k<j;k++)
                {
                    mul*=arr[k];
                }
                if(mul>max)
                {
                    max=mul;
                }
            }
        }
        System.out.println(max);
    }
}
