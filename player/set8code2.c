#include<stdio.h>
int main(void)
{
    int a;
    int i;
    int arr[a];
    int max;
    scanf("%d",&a);
   for(i=0;i<a;i++)
{
    scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<a;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
}
printf("%d",max);
}
