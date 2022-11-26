#include<stdio.h>
#include<conio.h>
int main()
{
  int i,r,a=1;
  printf("Enter the range for Harmonic series:");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
  {
   if(i<=1)
   {
       printf("%d",a);
   }
   else
   {
       printf("+ %d/%d",a,i);
   }
  }
  getch();
  return 0;
}
