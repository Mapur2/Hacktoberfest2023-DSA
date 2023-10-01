#include<stdio.h>
int binary(int a[],int n,int  e)
{
	int l=0,u=n-1,m=0;
	while(l<=u)
	{
		m=(l+u)/2;
		if(a[m]==e)
			return m;
		else if(a[m]>e)
			u=m-1;
		else
			l=m+1;
	}
	return -1;
}
int main() {
	int *a,n,i,e;
	printf("enter the size ");
	scanf("%d",&n);
	printf("enter the array\n");
	a=(int*)malloc(n*sizeof(a));
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	printf("enter the number to search: ");
	scanf("%d",&e);
	i=binary(a,n,e);
	if(i==-1)
		printf("Not found");
	else
		printf("Number is found at position %d",i+1);
}