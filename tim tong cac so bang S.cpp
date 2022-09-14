#include <stdio.h>
#include <conio.h>

void Tinh(int a[], int n, int S)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		if(a[i]+a[j]==S)
		printf("\n%d %d",a[i],a[j]);
		}
}		
	
main()
{	
    int a[50], n, S; 
	printf("\nNhap S: ");
	scanf("%d",&S);
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]= ",i+1);
		scanf("%d",&a[i]);
		}
	Tinh(a,n,S);
}		
