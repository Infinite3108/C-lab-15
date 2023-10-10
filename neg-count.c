#include<stdio.h>
void main(){
	int n,c=0,i;
	printf("Enter limit: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter number for a[%d]: \n",i);
	scanf("%d",&a[i]);
	if(a[i]<0){
	c++;
	}
	}
	
	printf("Count of Negative numbers are : %d",c);

}
