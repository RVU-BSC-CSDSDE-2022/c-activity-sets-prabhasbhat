#include<stdio.h>
int main(void)
{
  int n,a[],i,sum=0;
  printf("Enter the size of the array");
  scanf("%d",&a);
  printf("Enter the numbers");
  for (int i=0;i<n;i++)
    {
    scanf("%d",a[i]);
    sum=sum+a[i];
    }
printf("The sum of the numbers is %d",sum);
}