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

void TimPhanTu(int a[], int n, int b[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(a[j]==a[i]) b[i]++;
			}
	}
	int max=1;
	for(int i=0; i<n; i++)
	{
		if(b[i]>max) max=b[i];
		}
	for(int i=0; i<n; i++)
	if(b[i]==max)
	printf("\nPhan tu xuat hien nhieu lan nhat la %d voi so luong %d lan",a[i],b[i]);	
}			

main()
{
	int a[50], n, b[50]={0};
	Nhap(a,n);
	TimPhanTu(a,n,b);
}	

















