#include<stdio.h>
int main()
{
int d1,y1,m1,x2,y2,d2,n,m2;
printf("Enter the two date:");
scanf("%d-%d-%d",&y1,&m1,&d1);
scanf("%d-%d-%d",&y2,&m2,&d2);
n=abs(m1-m2);
printf("%d",&n);
return 0;
}
