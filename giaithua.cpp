#include <stdio.h>
#include <conio.h>

main()
{
	int n, s=1, S=1;
	printf("\nNhap n:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	s=s*i;
	for(int i=1; i<=s; i++)
	S=S*i;
	printf("\nKet qua 1 bang: %d",s);
	printf("\nKet qua 2 bang: %d",S);
}	
