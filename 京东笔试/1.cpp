/*
ţţ�������ǳ�����Ȥ��ţţ����ʦ����һ��n Ȼ��ţţ��Ҫ�ش��ܱ�1��n֮�䣨����1��n��
����������������С���� 
����:3
�����6 
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
