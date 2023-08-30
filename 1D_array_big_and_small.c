#include<stdio.h>
main()
{
	int a[10],i,n,big=0,small=0;
	printf("enter no of elements..:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter element at a[%d]..:",i);
		scanf("%d",&a[i]);
	}
	printf("\ngiven array elements are..:");
	for(i=0;i<n;i++)
	{
		printf("\n%5d",a[i]);
    }
    big=small=a[0];
    for(i=0;i<n;i++)
    {
    	if(big<a[i])
    	{
    		big=a[i];
		}
		else if(small>a[i])
		{
			small=a[i];
		}
	}
	printf("\nBiggest number is..:%d",big);
	printf("\nSmallest number is..:%d",small);
}
