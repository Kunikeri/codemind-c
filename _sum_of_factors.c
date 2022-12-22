#include<stdio.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    for(i=1,r=0;i<n;i++)
    {
        if(n%i==0)
     { 
       r=(r+i);
       }
     }
      printf("%d",r);
}