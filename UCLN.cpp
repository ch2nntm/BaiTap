#include <stdio.h>
#include <conio.h>

int UCLN(int a, int b)
{
	if(a==b) return a;
	if(a>b) return UCLN(a-b,b);
	if(b>a) return UCLN(a,b-a);
}

/*int UCLN(int a, int b) 
{
    if (b == 0) return a;
    return UCLN(b, a % b);
    }*/

main()
{
	int a, b;
	printf("\nNhap a,b: ");
	scanf("%d%d",&a,&b);
	printf("\nUoc chung lon nhat: %d",UCLN(a,b));
	printf("\nBoi chung nho nhat: %d",(a*b)/UCLN(a,b));
	
}	
