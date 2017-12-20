#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	char str[30];
	int temp;
	int i,length;
	cout<<"Enter a string";
	cin.get(str,30);
	length=strlen(str);
	for(i=0;i<length;i+=2)
	{
		if(str[i+1]!='\0')
		{
	    temp=str[i];
	    str[i]=str[i+1];
	    str[i+1]=temp;
		}
	
	}
	cout<<str;
return 0;
}
