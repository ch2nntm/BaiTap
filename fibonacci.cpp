#include <stdio.h>
#include <conio.h>

int fibonacci(int n)
{
	if (n<0) return 0;
	else if (n==0 || n==1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}	

main()
{
	int n;
	printf("\nNhap n:");
	scanf("%d",&n);
	printf("\nFibonacci cua %d la: %d",n,fibonacci(n));
}	
	
