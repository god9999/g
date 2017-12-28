
#include<iostream>
#include<string.h>
using namespace std;
int max(int[],int);
int main(void)
{
    int ai,i;
    int result;
    int arr[10];
    cout<<"Enter the value";
    cin>>ai;
    cout<<"enter the array variables";
    for(i=0;i<ai;i++)
    {
        cin>>arr[i];
    }
    result = max(arr,ai);
    cout<<result;
    return 0;
}
int max(int arr[],int a)
{
    int max;
    int i;
    max=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
        

  


