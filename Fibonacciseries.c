#include<stdio.h>
#include<conio.h>
int main()
{
  int i,r,f=0,s=1,sum;
  printf("Enter the range for Fibonacci series:");
  scanf("%d",&r);
  for(i=0;i<r;i++)
  {
      sum=f+s;
      printf("%d\t",f);
      f=s;
      s=sum;
  }
  getch();
  return 0;
}
