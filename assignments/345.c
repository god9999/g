#include<stdio.h>
#include<string.h>
int main(void)
{
    int a[10];
    int n;
    int i,j;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
   
   for(i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }
   return 0;
}
