#include <stdio.h>
#include <conio.h>

main(){
	int n, gio, phut, giay, sodu, sogan;
	//n: so giay duoc nhap vao;
	printf("\nNhap so giay:");
	scanf("%d",&n);
	sogan=n; //gan sogan = so giay;
	gio=n/3600; //Tinh so gio;
	n=n%3600;
	phut=n/60; //Tinh so phut;
	giay=n%60;
	printf("\n%d giay la %d gio %d phut %d giay",sogan,gio,phut,giay);
}	
