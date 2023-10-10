#include<stdio.h>
void main(){
	int n,i,m,c=0;
	printf("Enter limit :\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("Enter element for a[%d]: \n",i);
	scanf("%d",&a[i]);
	}
	printf("Enter element for search : \n");
	scanf("%d",&m);
	for(i=0;i<n;i++){
	if(a[i]==m){
	printf("Index of element %d is: %d\n",m,i);
	c++;
	break;
		}
	}
	if(c==0){
	printf("Element %d is not in the array !!",m);
	}
}

