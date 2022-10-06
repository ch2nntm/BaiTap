#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

void inHo(string chuoi){
    //HAM SUBSTR: cắt chuỗi con ra từ chuỗi string ban đầu
    int h = chuoi.find(" ");//Lay vi tri tu trai qua co ky tu " cach " dau tien
    cout << "\nHo: " << chuoi.substr(0,h);//substr(start, len) -> start: vtri thu may, len: do dai bao nhieu
}

void inTen(string chuoi){
    int t = chuoi.rfind(" ");//Lay vi tri tu phai qua co ky tu " cach " dau tien
    cout << "\nTen: " << chuoi.substr(t+1,chuoi.length()-t);
}

void inDem(string chuoi){
    int h = chuoi.find(" ");//Lay vi tri tu trai qua co ky tu " cach " dau tien
    int t = chuoi.rfind(" ");//Lay vi tri tu phai qua co ky tu " cach " dau tien
    cout <<"\nDem: " << chuoi.substr(h+1,t-1-h);
}

void chenChuoi(string chuoi){
    string chuoi1 = chuoi + " lop 12";
    string chuoi2=chuoi;
    cout << "\nChuoi sau khi them LOP 12 la: " << chuoi1;
    //HAM PUSH_BACK: thêm một ký tự vào vị trí cuối cùng trong string
    chuoi1.push_back('a');
    cout << "\nThem a vao cuoi chuoi: " << chuoi1;
    //HAM STR.INSERT(P,CHR): chen ki tu chr o vi tri thu p
    chuoi1.insert(chuoi1.begin()+3,'H');
    cout << "\nThem H o vi tri thu 3: " << chuoi1;
    //HAM STR.INSERT(POSITION, STR1): chèn chuỗi str1 vào chuỗi str tại vị trí position
    chuoi1.insert(4,chuoi);
    cout << "\nChuoi1 khi chen chuoi tai vi tri thu 4: " << chuoi1;
}

void soSanh(string chuoi, string chuoi1){
    if((chuoi==chuoi1)==1)
        cout << "\n" << chuoi << " giong " << chuoi1 ;
    else{
        if((chuoi>chuoi1)==1)
            cout << "\n" << chuoi << " sau " << chuoi1 ;
        else
            cout << "\n" << chuoi << " truoc " << chuoi1 ;
    }
}

void xoaKT(string chuoi){
    //HAM ERASE: XOA KY TU TAI VI TRI CHI DINH
    //HAM ERASE(FIRST, LAST): XOA CAC KY TU TRONG PHAM VI CHI DINH
    chuoi.pop_back();
    cout <<"\nXoa ki tu cuoi cung: " << chuoi;
    chuoi.erase(chuoi.begin()+2); //XOA KY TU O VI TRI THU 2
    cout << "\nChuoi xoa ki tu thu 2: " << chuoi;
    chuoi.erase(chuoi.begin()+2,chuoi.begin()+5);
    cout << "\nChuoi xoa tu ki tu thu 2 toi ki tu thu 5: " << chuoi;
}

/*void copyChuoi(string chuoi){
    //HAM STR.COPY(LENGTH, POS): copy chuoi con tu chuoi ban dau tu vi tri thu pos co do dai length
    string chuoi1 = chuoi.copy(5,2);
    cout <<"\nChuoi copy la: " << chuoi1;
}
*/

void thayThe(string chuoi){
    //HAM REPLACE: str.replace(pos,len,chuoi) --> thay chuỗi str từ vị trí pos với độ dài len bằng chuoi
    chuoi.replace(7,3,"Thi");
    cout << "\nChuoi sau khi thay the: " << chuoi;
}

void demKT(string chuoi){
    int dem=0;
    string kt="g";
    for(int i=0; i<chuoi.length(); i++){
        if(chuoi.substr(i,1) == kt)
            dem++;
    }
    cout << "\nChuoi co " << dem << " ki tu g";
}

int main()
{
    string chuoi = "Nguyen Van Anh Thu";
    string chuoi1 = "Nguyen Hoang";
    string chuoicanthaythe = chuoi;
    int vt = chuoi.find('n',3);
    cout << "Vi tri xuat hien dau tien cua n tai vi tri thu 3: " << vt;

    inHo(chuoi);
    inTen(chuoi);
    inDem(chuoi);
    chenChuoi(chuoi);
    //soSanh(chuoi,chuoi1);
    xoaKT(chuoi);
    thayThe(chuoi);
    demKT(chuoi);
}
