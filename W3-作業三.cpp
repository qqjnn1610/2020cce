#include<stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printAll()
{
     for(int i=0;i<10;i++). printf("%d ",a[i]);
     printf("\n");
}
int main()
{
    int *p=& a[2];
    *p=200;
                printAll();
    int *p2=p+4;
    *p=666;
                printAll();
    p2---;
    *p=555;
                printAll();
    return 0;
}
