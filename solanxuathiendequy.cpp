#include <stdio.h>
#include <conio.h>

int XH(int a[], int n, int x)
{
	if(n==0) return 0;
	else 
	{
	    if(a[n-1]==x) return 1+XH(a,n-1,x);
	    else return XH(a,n-1,x);
	    }
}	

main()
{
	int a[100], n, x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
		}
	printf("\nSo lan xuat hien: %d",XH(a,n,x));
}		
