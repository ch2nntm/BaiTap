#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int &n)
{
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("a[%d]= ",i+1);
		scanf("%d",&a[i]);
		}
}

void TimKiem(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			printf("%d\n",a[i]);
			}
	}
}

main()
{
	int a[50],n;
	Nhap(a,n);
	TimKiem(a,n);
}			
			
			
			
			
			
			
			
			
			
			
			
			
