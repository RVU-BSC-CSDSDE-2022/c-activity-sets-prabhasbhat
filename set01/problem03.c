#include<stdio.h>
int main(void)
{
  int a,b,sum;
  printf("Enter the first number\n");
  scanf("%d",&a);
  printf("Enter the second number\n");
  scanf("%d",&b);
  sum=sum_func(a,b);
  printf("The sum of %d and %d is %d",a,b,sum);
  return(0);
}
sum_func(int a,int b)
{
int sum;
sum=a+b;
return sum;
}

