#include<stdio.h>
int main()
{
    int m,n,i,b;
    scanf("%d%d",&m,&n);
    b=0;
    for (i=m;i<+n;i++)
    {
     if (i%2==0 && i%3==0)
     {
         b=b+1;
     }
   }
    printf("%d",b);
}