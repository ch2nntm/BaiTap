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

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int QuickSort(int a[], int n, int left, int right)
{
	int i,j,x;
	x=a[(left+right)/2];
	i=left; j=right;
	do
	{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
			swap(a[i],a[j]);
			i++; j--;
	}
	while(i<=j);
	//for(int i=0; i<n; i++)
	//printf("%d ",a[i]);
	//swap(a[i],a[j]);
	//QuickSort(a,n,left,i);
	//QuickSort(a,n,j,right);
	return i;
}

void DC(int a[], int n, int left, int right)
{
	if(left<right){
	int p=QuickSort(a,n,left,right);
	DC(a,n,left,p-1);
	DC(a,n,p,right);
	}
}

void Xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	printf("%d ",a[i]);
	}


int main()	
{
	int a[50], n ,left, right;
	Nhap(a,n);
	DC(a,n,0,n-1);
    Xuat(a,n);
    return 0;
}	
	
	
	















