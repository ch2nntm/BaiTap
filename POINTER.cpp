#include <bits/stdc++.h>
#define FU(i,n) for(int i = 0; i < n; i ++)
#define FUG(i,n) for(int i = n - 1; i >= 0; i --)

using namespace std;

void GTri_ThamChieu(int x, int y, int z, int* ptr){
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    ptr = &x;
    cout << "x= " << *ptr << endl;
    cout << "x+100= " << *ptr + 100 << "\n";
    ptr = &y;
    cout << "y= " << *ptr << endl;
    cout << "y+100= " << *ptr + 100 << "\n";
    ptr = &z;
    cout << "z= " << *ptr << endl;
    cout << "z+100= " << *ptr + 100 << "\n";
}

void DiaChi(int *arr, int n){
    cout << "\nMang co " << n << " phan tu";
    cout << "\nDia chi 3 phan tu dau tien la: " << arr << "  " << arr + 1 << "  " << arr + 2;
}

void SoChan(int *arr, int n){
    int dem = 0;
    FU(i, n){
        if( *(arr + i) % 2 == 0)
            dem ++;
    }
    cout << "\nSo cac so chan co trong mang la: " << dem;
}

void GtriNguoc(int arr[], int n){
    cout << "\nMang cac so nguoc: ";
    FUG(i, n)
        cout << arr[i] << " ";
}

void GtriNguoc_ConTro(int *arr, int n){
    cout << "\nMang cac so nguoc: ";
    FUG(i, n)
        cout << *(arr + i) << " ";
}

int main()
{
    int x, y, z;
    int* ptr;

    GTri_ThamChieu(x, y, z, ptr);

    int arr[] = {5, 63, 65, 21, 45, 9, 63, 2};
    int h = sizeof(arr) / sizeof(arr[0]);

    cout << "\nCac so co trong mang: ";
    FU(i,h)
        cout << arr[i] << " ";

    DiaChi(arr, h);

    SoChan(arr, h);

    GtriNguoc(arr, h);

    GtriNguoc_ConTro(arr, h);
}
