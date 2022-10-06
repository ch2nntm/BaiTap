#include <iostream>
#define FU(i, n) for(int i = 0; i < n; i ++)
#define FUG(i, n) for(int i = n; i >= 0; i --)
#define FAB(i, a, b) for(int i = a; i < b; i ++)

using namespace std;

void ChanLe(int n){
    if(n & 1)
        cout << "\n" << n << " la so le";
        else cout << "\n" << n << " la so chan";
}

int XH(int n, int a[]){
    int k = 0;
    FU(i, n){
        k ^= a[i];
        }
    return k;
}

void SoLanXH(int n, int a[]){
    cout << "\nSo xuat hien 1 lan trong mang la: " << XH(n, a);
}

void Mu(int n){
    cout << "\n2^" << n <<" = " << (1 << n);
}

int SL(int n){
    int dem = 0;
    while(n != 0){
        dem ++;
        n = n / 2;
    }
    return dem;
}

void SoNhiPhan(int n){
    int sl = SL(n);
    int k;
    FUG(i,sl){
        k = n >> i;
        cout << (k & 1);
    }
}

void SoBit(int n, int m){
    int sobit = 1 & (n >> m);
    if(sobit == 0)
        cout << "\nBit thu " << m << " tinh tu 0 ben phai sang la so 0";
        else cout << "\nBit thu " << m << " tinh tu 0 ben phai sang la so 1";
}

void TapHopCon(int n, int a[]){
    int tmp;
    FAB(i, 1, (1 << n)){
        cout << "\n{";
        tmp = i;
        FU(j, n){
            if((tmp & 1) == 1)
                cout << a[j] << "; ";
            tmp = tmp >> 1;
        }
        cout << "}";
    }
}

int main()
{
    int n, a[100];
    cout << "\nNhap n:";
    cin >> n;

    int t = n, k;
    cout << "Nhap k:";
    cin >> k;

    FU(i, n){
        cout << "\na[" << (i + 1) << "]=";
        cin >> a[i];
    }

    cout << "\nCac so co trong mang la:";
    FU(i, n)
        cout << a[i] << " ";

    ChanLe(n);

    SoLanXH(n, a);

    Mu(n);

    cout << "\nSo nhi phan cua " << n << " la: " ;
    SoNhiPhan(n);

    SoBit(t, k);

    TapHopCon(t, a);

}
