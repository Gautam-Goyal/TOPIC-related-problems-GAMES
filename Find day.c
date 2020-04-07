#include <stdio.h>
#include <conio.h>
int main()
{
    int year,leap_years,other_years,week,total_days;
    printf("Enter the year ");
    scanf("%d",&year);

    year=(year-1)-2001;

    if(year<0)
    year=year*(-1);
    else
    year=year;

    leap_years=(year+1)/4;
    other_years=year-leap_years;

    total_days=(leap_years*366)+(other_years*365)+1;

    week=total_days%7;

    if(week==0)
    printf("Monday");
    else if(week==1)
    printf("Tuesday");
    else if(week==2)
    printf("Wednesday");
    else if(week==3)
    printf("Thursday");
    else if(week==4)
    printf("Friday");
    else if(week==5)
    printf("Saturday");
    else if(week==6)
    printf("Sunday");
    else
    printf("Try again");
    getch();
    return 0;
}
