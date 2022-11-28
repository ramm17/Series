#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("Enter any number to check for palindrome:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("%d is the palindrome",temp);

    }
    else
    {
        printf("%d is not palindrome",temp);
    }
    getch();
    return 0;
}

