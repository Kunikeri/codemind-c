#include<stdio.h>
int main()
{
    int n,i,flag=0,s=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
    {
       flag=1;
       break;
     }
}
if(flag==1)
printf("True");
else
printf("False");
}