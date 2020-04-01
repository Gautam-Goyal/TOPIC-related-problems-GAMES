#include <stdio.h>
void ly(int);
int main()
{
    int n;
    printf("enter the year ");
    scanf("%d",&n);

    ly(n);
    return 0;
}

void ly(int n)
{
    if(n%100==0)
    {
        if(n%400==0)
        printf("This is a leap year");
        else
        printf("not a leap year");
    }

    else if(n%4==0)
    printf("This is a leap year");

    else
    printf("not a leap year");
}
