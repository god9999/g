#include<stdio.h>
#include<string.h>
int main(void)
{
    int arr[10];
    int a;
    int i,j,temp;
    printf("Enter the numbers");
    scanf("%d",&a);
    printf("Enter the array elements");
    for(i=0;i<a;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("%d",arr[0]);
    return 0;
}
