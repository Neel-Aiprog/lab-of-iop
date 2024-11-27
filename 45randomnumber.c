#include<stdio.h>
#include<time.h>
int main()
{
int yourguess,n=1,i,r,m=0,d;
time_t seconds;
seconds=time(NULL);
seconds=seconds%100;
int count=0;
i=seconds%10;
r=seconds-i;
d=seconds+(10-i);
printf("your guessed number by the system is between 1 to 100 ALL THE BEST !!! \n");
printf("enter your guess\t");
    while(n>m)
    {
    scanf("%d",&yourguess);
    if(yourguess==seconds)
    {
    printf("\nyou have guessed the correct number");
    break;
    }
    else
    {
    printf("\npls try another number\t");
    }
    count++;
        if(count>5)
    {
    printf("\nyour number is greater than %d and less than %d\n",r,d);
    }
    }

}