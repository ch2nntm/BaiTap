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

int KTra(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		if(a[i]>a[i+1])
		return 0;
		}
	return 1;
}

main()
{
	int a[100], n;
	Nhap(a,n);
	if(KTra(a,n)==1)
	printf("\nMang tang");
	else
	printf("\nKhong phai mang tang");
}		
