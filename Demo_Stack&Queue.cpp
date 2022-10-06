#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

void NP(int n){
    stack<int> s;
    while(n!=0){
        int tmp = n&1;
        s.push(tmp);
        n=n>>1;
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}

void Hexx(int n){
    stack<char> s;
    while(n!=0){
        int d = n%16;
        if(d<10) s.push(d);
        else if(d=10) s.push('A');
        else if(d=11) s.push('B');
        else if(d=12) s.push('C');
        else if(d=13) s.push('D');
        else if(d=14) s.push('E');
        else if(d=15) s.push('F');
        n=n/16;
    }
    cout << "\nHe so 16:";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}

void HS8(int n){
    stack<int> s;
    while(n!=0){
        int t = n%8;
        s.push(t);
        n=n/8;
    }
    cout << "\nHe so 8: ";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
}

void SDN(int n){
    queue<int> s;
    while(n!=0){
        int sd = n%10;
        s.push(sd);
        n = n/10;
    }
    while(!s.empty()){
        cout << s.front();
        s.pop();
    }
}

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;

    Hexx(n);
    HS8(n);
}
