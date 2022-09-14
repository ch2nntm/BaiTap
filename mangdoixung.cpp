#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int Kiemtra(int a[50], int n)
{
	
	for(int i=0; i<n/2; i++)
	{
		if(a[i]!=a[n-1-i])
		return 0;
		}
	return 1;	
}

main()	
{
	int a[50], n;
	printf("\nNhap n:");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
	printf("\na[%d]= ",i+1);
	scanf("%d",&a[i]);
	}
	if(Kiemtra(a,n)==0)
	printf("\nMang khong doi xung");
	else
	printf("\nMang doi xung");
}	
