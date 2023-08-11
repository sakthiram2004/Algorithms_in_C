#include<stdio.h>
int a[100],se;
int binary(int ,int );
main()
{
	int i,n,c,j,f;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d ele:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		c=a[i];
		a[i]=a[j];
		a[j]=c;
	}
	printf("Enter search ele:\n");
	scanf("%d",&se);
	f=binary(0,n-1);
	if(f!=-1)
	printf("Ele is found");
	else
	printf("Ele is not found");
	return 0;	
}
int binary(int start,int end)
{
	int mid;
	if(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==se)
		return mid;
		else if(a[mid]<se)
		return binary(mid+1,end);
		else
		return binary(start,mid-1);
	}
	return -1;
}

