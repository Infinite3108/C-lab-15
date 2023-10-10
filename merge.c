#include<stdio.h>
void main(){
	int n,m,i,j;
	printf("Enter size of array a: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter a number for a[%d]:\n",i);
	scanf("%d",&a[i]);
	}
	
	printf("Enter size of array b: \n");
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++){
	printf("Enter a number for b[%d]:\n",i);
	scanf("%d",&b[i]);
	}
	n=n+m;
	for(i=n-m,j=0;i<n;i++,j++){
	a[i]=b[j];
	}
	for(i=0;i<n;i++){
	printf("c[%d] = %d\n",i,a[i]);
	}
}
