/*
牛牛对整除非常感兴趣。牛牛的老师给出一个n 然后牛牛需要回答能被1到n之间（包括1和n）
所有整数整除的最小的数 
输入:3
输出：6 
*/ 
#include<stdio.h>
long gcd(long x,long y)
{long r;
 do
 {
  r=x%y;
  x=y;
  y=r;
 }while(r);
 return x;
}
int main(){
long n,i,y=1;
scanf("%ld",&n);
for(i=2;i<=n;i++)
  y=y*i/gcd(i,y);
printf("%ld",y);
return 0;
}
