#include<stdio.h>
#include<string.h>
int main(void)
{
char tmp[16];
scanf("%s", tmp);
int j=0;
if(tmp[j] >= '0' && tmp[j] <= '9')
printf("yes");
else
printf("no");
return 0;
}
