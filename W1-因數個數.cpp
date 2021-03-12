＃include<stdio.h>
int main()
{
  int a,ans=2;
  scanf("%d" , &a);
  for(int i=2;i<=5000;i++)
  {
      if(a%i==0)
      {
          ans+=1;
          if(a==i)
          {
              ans-=1;
          }
      }
  }
  printf("%d\n", ans);
}
