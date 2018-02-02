#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("one");
            break;
        }
        case 2:
        {
            printf("two");
            break;
        }
        case 3:
        {
            printf("three");
            break;
        }
        case 4:
        {
            printf("four");
            break;
        }
        case 5:
        {
            printf("five");
            break;
        }
        case 6:
        {
            printf("six");
            break;
        }
        case 7:
        {
            printf("seven");
        }
        case 8:
        {
            printf("eight");
            break;
        }
        case 9:
        {
            printf("nine");
            break;
        }
        default:
        {
            printf("invalid");
        }
    }
    return 0;
}
