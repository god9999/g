#include<stdio.h>
int main(void)
{
    int a;
    int i;
    int arr[10];
    int k;
    scanf("%d",&a);
    scanf("%d",&k);
   for(i=0;i<a;i++)
{
    scanf("%d",&arr[i]);
}
 for(i=0;i<a;i++)
 {
     if(arr[i]==k)
     {
         printf("%d",i+1);
     }
 }
}
