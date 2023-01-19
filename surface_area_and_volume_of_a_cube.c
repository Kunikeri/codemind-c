#include<stdio.h>
void A(int);
void Vol(int);
int main()
{
    int a;
    scanf("%d",&a);
    A(a);
    Vol(a);
    return 0;
}
void A(int a)
{
    int S;
    S=6*a*a;
    printf("Surface area = %d and ",S);
}
void Vol(int a)
{
    int V;
    V=a*a*a;
    printf("Volume = %d",V);
}

