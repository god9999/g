#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
    int i,a;
    int num[20];
    int result=0;
    char str[20];
    cout<<"Enter a string";
    cin.get(str,20);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='I'|| str[i]=='i')
        {
            num[i]=1;
        }
        else if(str[i]=='V' || str[i]=='v')
        {
            num[i]=5;
        }
        else if(str[i]=='X'|| str[i]=='x')
        {
            num[i]=10;
        }
    }
    for(i=len-1;i>0;i--)
    {
        if(num[i]>num[i-1])
        {
            result+=num[i]-num[i-1];
        }
        else
        {
            if(i==(len-1))
             result+=num[i]+num[i-1];
             else
             result+=num[i-1];
        }
    
    }
    cout<<result;
return 0;
}
