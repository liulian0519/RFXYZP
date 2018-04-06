#include<stdio.h>
void sort(int a[], int length){

    int i, j, temp;

    for(i = 0; i < length; ++i){

        for(j = length - 1; j > i; --j){

            if(a[j] >a[j - 1]){
                
                temp = a[j];

                a[j] = a[j - 1];

                a[j - 1] = temp;

            }
        }

    }

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n]; int i;int b[n]; int niu[n] ;int yang[n];int j;int k;int countn=0;int county=0; int count =0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  
    sort(a,n);
    for(i=0,j=0,k=0;i<n,j<n/2+1,k<n/2+1;i++,j++,k++){
	
	
		niu[j] = a[i];	
		yang[k] = a[i+1];	
	
		i=i+1;
	

	} 

if(n%2==0){
	 for(i=0;i<n/2;i++){
        countn+=niu[i];
    }
   
      for(i=0;i<n/2;i++){
        county+=yang[i];
    }
}
else{
	for(i=0;i<n/2+1;i++){
        countn+=niu[i];
    }
    
      for(i=0;i<n/2;i++){
        county+=yang[i];
    }
}
   
  
    count = countn-county;
   printf("%d",count);
}
