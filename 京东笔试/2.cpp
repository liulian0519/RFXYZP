/*给定一个字符串 求移除某部分之后为回文串  求有多少种移除的办法
输入： XXY
输出：4 
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

