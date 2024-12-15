#include<stdio.h>
int main()
{
    int day,month,year,code_y,code_m,code_d,sum,sumNew,i,digits_2,by7;
    printf("\nEnter day number:");
    scanf("%d",&day);
     printf("\nEnter month number:");
    scanf("%d",&month);
     printf("\nEnter year number:");
    scanf("%d",&year);
    if(year<1900||year>2099)
       { printf("Day name of that year can't be displayed");
        return 0;}
    if(month>12)
        { printf("Invalid Month");
        return 0;}
    if(day>31)
        {printf("Invalid date");
        return 0;}
    if(day>7)
    {
        code_d=day%7;
    }
    else
    {
        code_d=day;
    }
    if(month==1)
        code_m=1;
    else if(month==2)
    {
        code_m=4;
        if(day>29)
        {
            printf("invalid date");
            return 0;
        }
    }
    else if(month==3||month==11)
        code_m=4;
    else if(month==4||month==7)
        code_m=0;
    else if(month==9||month==12)
        code_m=6;
    else if(month==5)
        code_m=2;
    else if(month==6)
        code_m=5;
    else if(month==8)
        code_m=3;
    else if(month==10)
    { code_m=1;}

    if(year>=1900&&year<2000)
    {
        code_y=0;
        digits_2=year%100;
        by7=(digits_2/4)+digits_2;
        by7=by7%7;
        code_y=code_y+by7;

        sum=code_d+code_m+code_y;
        if(year%4==0&&month==1||month==2)
        {
            sum=sum-1;
        }
        if(sum>7)
        {
            sum=sum%7;
            if(sum==1)
            {
               printf("The day on given date is : Sunday");
                return 0;
            }
            else if(sum==2)
            {
                printf("The day on given date is : Monday");
                return 0;
            }
             else if(sum==3)
            {
                printf("The day on given date is : Tuesday");
                return 0;
            }
             else if(sum==4)
            {
                printf("The day on given date is : Wednesday");
                return 0;
            }
             else if(sum==5)
            {
                printf("The day on given date is : Thursday");
                return 0;
            }
             else if(sum==6)
            {
                printf("The day on given date is : Friday");
                return 0;
            }
             else if(sum==0)
            {
                printf("The day on given date is : Saturday");
                return 0;
            }

        }
        else
        {
          if(sum==1)
            {
               printf("The day on given date is : Sunday");
                return 0;
            }
            else if(sum==2)
            {
                printf("The day on given date is : Monday");
                return 0;
            }
             else if(sum==3)
            {
                printf("The day on given date is : Tuesday");
                return 0;
            }
             else if(sum==4)
            {
                printf("The day on given date is : Wednesday");
                return 0;
            }
             else if(sum==5)
            {
                printf("The day on given date is : Thursday");
                return 0;
            }
             else if(sum==6)
            {
                printf("The day on given date is : Friday");
                return 0;
            }
             else if(sum==7)
            {
                printf("The day on given date is : Saturday");
                return 0;
            }
        }
    }
    else if(year>=2000&&year<=2099)
     {
        code_y=6;
        digits_2=year%100;
        by7=(digits_2/4)+digits_2;
        by7=by7%7;
        code_y=code_y+by7;

        sum=code_d+code_m+code_y;
         if(year%4==0&&month==1||month==2)
        {
            sum=sum-1;
        }
        if(sum>7)
        {
            sum=sum%7;
            if(sum==1)
            {
               printf("The day on given date is : Sunday");
                return 0;
            }
            else if(sum==2)
            {
                printf("The day on given date is : Monday");
                return 0;
            }
             else if(sum==3)
            {
                printf("The day on given date is : Tuesday");
                return 0;
            }
             else if(sum==4)
            {
                printf("The day on given date is : Wednesday");
                return 0;
            }
             else if(sum==5)
            {
                printf("The day on given date is : Thursday");
                return 0;
            }
             else if(sum==6)
            {
                printf("The day on given date is : Friday");
                return 0;
            }
             else if(sum==0)
            {
                printf("The day on given date is : Saturday");
                return 0;
            }

        }
        else
        {
          if(sum==1)
            {
               printf("The day on given date is : Sunday");
                return 0;
            }
            else if(sum==2)
            {
                printf("The day on given date is : Monday");
                return 0;
            }
             else if(sum==3)
            {
                printf("The day on given date is : Tuesday");
                return 0;
            }
             else if(sum==4)
            {
                printf("The day on given date is : Wednesday");
                return 0;
            }
             else if(sum==5)
            {
                printf("The day on given date is : Thursday");
                return 0;
            }
             else if(sum==6)
            {
                printf("The day on given date is : Friday");
                return 0;
            }
             else if(sum==7)
            {
                printf("The day on given date is : Saturday");
                return 0;
            }
        }
    }

    printf("\n\t----------------------------------------------------------------------------");
 return 0;

}
