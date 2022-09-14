#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int &n, int key)
{
	printf("\nNhap n: ");
	scanf("%d",&n);
	printf("\nNhap key: ");
	scanf("%d",&key);
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= ",i+1);
		scanf("%d",&a[i]);
		}
}

int BSearch_Recursion(int a[],int n, int key, int left, int right)
{
	left=0, right=n-1;
	if(left<=right)
	{
		int mid=(left+right)/2;
		if(key=a[mid])
		return mid;
		else if(key<a[mid])
		return BSearch_Recursion(a,n,key,left,mid-1);
		else
		return BSearch_Recursion(a,n,key,mid+1,right);
	}
	return -1;
}

main()
{
	int a[50], n, key, left, right;
	Nhap(a,n,key);
	int tk = BSearch_Recursion(a,n,key,left,right);
	printf("\nVi tri can tim la: %d",tk);
}		
