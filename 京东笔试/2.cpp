/*����һ���ַ��� ���Ƴ�ĳ����֮��Ϊ���Ĵ�  ���ж������Ƴ��İ취
���룺 XXY
�����4 
*/ 
#include <iostream>
using namespace std;
int gcd(int a,int b){    
    if (b==0)         
    return a;    
    return gcd(b, a%b);
}
int main(){           
    int i,n,m,temp=0,ans=1;        
    cin >> n;        
    for (i=1; i<= n; i++) {                             
        temp=gcd(ans,n);            
        ans=ans/temp*n;        
    }        
    cout << ans << '\n';    
   
    return 0;
}

