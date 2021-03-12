#include<stdio.h>
int f(int a,int b)
{
    int x;
    x=a%b;
    if(x>0)
    {
        a=b;
        b=x;
        x=a%b;
        return f(a,b);
    }
    else if(x==0)
    {
        return b;
    }
}
int main()
{
    int a,b;
    scanf("%d%d" , &a , &b);
    printf("%d %d\n", a/f(a,b), b/f(a,b));
}
