//给定一个正整数，编写程序计算有多少对质数的和等于输入的这个正整数，并输出结果。
//输入值小于1000. 如，输入为10，程序应该输出结果为2。
//（共有两对质数的和为10，分别为（5,5）,（3,7））
#include<stdio.h>
#include<math.h>
int IsPrime(int n){ //判断是否为质数 
	if(n==1)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		 return 0;
	return 1;
	 
}
int main()
{
	int n;
	int count=0;
	int j=0;
	scanf("%d",&n);
	int b[n];
	for(int i=2;i<=n;i++){ //将为质数的数存入数组b中 
		if(IsPrime(i)){
			b[j++] = i;
		}
	}
	for(int k=0;k<j;k++){ //将数组b中的值进行相加，如果等于输入的值，则是 
		for(int m = k;m<j;m++){
			if(b[k]+b[m] == n){
				count++;
				printf("质数对：(%d,%d)",b[k],b[m]);
			}

		}
	}
	printf("个数：%d",count);

	
} 
