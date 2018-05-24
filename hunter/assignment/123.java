import java.util.*;
import java.lang.*;
import java.io.*;

public class Main
{
    public static void main(String[] args)
    {
        int n,k;
        int i;
        int j;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        int[] a=new int[n];
        int[] d=new int[n];
    for(i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
        d[i]=Math.abs(a[i]-k);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[i]<d[j])
            {
            int temp;
            temp=d[i];
            d[i]=d[j];
            d[j]=temp;
            }
        }
    }
    int c=0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                     if(d[i]==(Math.abs(a[j]-k))&&d[i]>0)
                     {
                         c++;
                         System.out.print(a[j]+" ");
                         a[j]=10002;
                         if(c>=3)
                         {
                             c=8;
                             break;
                         }
                     }
                     
                    
                }
                if(c==8)
                {
                    break;
                }
            }
    }
}
