#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int &n)
{
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]= ",i+1);
		scanf("%d",&a[i]);
		}
}

void Max(int a[], int n)
{
	int max=a[0];
	for(int i=1; i<n; i++)
	{
		if(a[i]>max)
		max=a[i];
		}
	printf("\nMax = %d",max);
}

main()
{
	int a[100], n;
	Nhap(a,n);
	Max(a,n);
}		
