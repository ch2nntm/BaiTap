#include <stdio.h>

int main ()
{
	int n;
    int q=0;
    printf ("nhap n:");
    scanf ("%d",&n);
    if(n==1) q=1;
    for(int i=n;i>=1;i--)
    {
    	int s=1;
        for(int j=i;j>=1;j--)
        {
            s*=j;
            }
        q+=s;
    } 
	printf("\nTong 1! + 2! + ... +%d!: %d ", n, q);
	}
