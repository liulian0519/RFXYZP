//����һ������������д��������ж��ٶ������ĺ͵�����������������������������
//����ֵС��1000. �磬����Ϊ10������Ӧ��������Ϊ2��
//���������������ĺ�Ϊ10���ֱ�Ϊ��5,5��,��3,7����
#include<stdio.h>
#include<math.h>
int IsPrime(int n){ //�ж��Ƿ�Ϊ���� 
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
	for(int i=2;i<=n;i++){ //��Ϊ����������������b�� 
		if(IsPrime(i)){
			b[j++] = i;
		}
	}
	for(int k=0;k<j;k++){ //������b�е�ֵ������ӣ�������������ֵ������ 
		for(int m = k;m<j;m++){
			if(b[k]+b[m] == n){
				count++;
				printf("�����ԣ�(%d,%d)",b[k],b[m]);
			}

		}
	}
	printf("������%d",count);

	
} 
