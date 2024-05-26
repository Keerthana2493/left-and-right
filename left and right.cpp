#include<stdio.h>
int main()
{
	int n,key;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&key);
	if(key!=x[])
	printf("INVALID KEY");
	else
	{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			if(i==n-1)
			{
				printf("left:%d\n",a[i-1]);
				printf("right:NULL");
				break;
			}
			else if(i==0)
			{
				printf("left:NULL\n");
				printf("right:%d",a[i+1]);
				break;
			}
			else
			{
				printf("left:%d\n",a[i-1]);
				printf("right:%d",a[i+1]);
				break;
			}
		}
		
		
	}
	return 0;
}