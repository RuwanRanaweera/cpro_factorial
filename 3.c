#include<stdio.h>
int fac(int n);
void main(){
	
	int no;
	printf("Enter the number: ");
	scanf("%d",&no);
	int k =fac(no);
	printf("Factorial is %d\n",k);
	
	
}

int fac(int n){
	int i,ans=1;
	for(i=1;i<=n;i++){
		
		ans= ans*i;
		
	}
	return ans;
}