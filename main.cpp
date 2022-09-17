#include <iostream>
#include <math.h>

using namespace std;

float Average(int n, int a[]){
    int s = 0; //s:tong cac so trong mang
    for(int i = 0; i < n; i++){
        s += a[i];
    }
    return (float)s/n;
}

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

void CountPrime(int n, int a[]){
    int count = 0;

    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
                count ++;
        }
    }
     if(count != 0){
        cout << "\nSo nguyen to co trong mang la: " << count << " va la nhung so: ";
        for(int i = 0; i < n; i++){
            if(isPrime(a[i])){
                cout << a[i] <<" ";
            }
        }
    } else cout <<"\nMang khong co so nguyen to";
}

bool isPerfect(int n){
    int s = 0;
    for(int i = 1; i <= n/2; i++){
        if(n%i == 0)
            s += i;
    }
    if(s == n) return true;
    return false;
}

void CountPerfect(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPerfect((a[i])))
            count ++;
    }

    if(count != 0){
        cout << "\nSo hoan hao co trong mang la: " << count << " va la nhung so: ";
        for(int i = 0; i < n; i++){
            if(isPerfect(a[i])){
                cout << a[i] <<" ";
            }
        }
    } else cout <<"\nMang khong co so hoan hao";
}


void Sort_Array_Ascending(int n, int a[]){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nMang sau khi duoc sap xep tang dan: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

void Max(int n, int a[]){
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    cout << "\nSo lon nhat trong mang la: " << max << " va o vi tri: ";
    for(int i = 0; i < n; i++){
            if(a[i] == max){
                cout << (i+1) << " ";
            }
    }
}

void Reverse_Number(int n, int a[]){
    cout << "\nDay ban dau voi cac so dao nguoc: ";
    for(int i = n-1; i >= 0; i--)
        cout << a[i] << " ";
}

int isSymmetrical_Number(int n){
    int symmetrical = 0;
    while(n > 0){
        symmetrical = symmetrical*10 + n%10;
        n /= 10;
    }
    return symmetrical;
}

void Count_Symmetrical_Number(int n, int a[]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isSymmetrical_Number(a[i]) == a[i])
            count ++;
    }
    if(count != 0){
        cout << "\nSo cac so doi xung co trong mang la: " << count << " va la nhung so: ";
        for(int i = 0; i < n; i++){
            if(isSymmetrical_Number(a[i]) == a[i]){
                cout << a[i] <<" ";
            }
        }
    } else cout <<"\nMang khong co so doi xung";
}

void Approximate_Number(int n, int a[]){
    float  min = abs(Average(n,a)-a[0]);

    for(int i = 1; i < n; i++){
        if(abs(Average(n,a) - a[i]) < min)
            min = abs(Average(n,a) - a[i]);
    }

    cout << "\nSo gan voi trung binh cong nhat la: ";
    for(int i = 0; i < n; i++){
        if(abs(Average(n,a)-a[i]) == min)
            cout << a[i] << " ";
    }
}


main()
{
    int n, a[100], b[100];
    float  min = abs(Average(n,a)-a[0]);

    cout << "\nNhap n:";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "\na[" << (i+1) << "]=" ;
        cin >> a[i];
    }

    cout << "Trung binh cong la: " << Average(n, a);

    CountPrime(n, a);

    CountPerfect(n, a);

    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    Sort_Array_Ascending(n, b);

    Max(n, a);

    Reverse_Number(n, a);

    Count_Symmetrical_Number(n, a);

    Approximate_Number(n, a);
}

