#include <iostream>
#include <iomanip>

using namespace std; // biên dịch những câu lệnh chứ không thì phải std :: cout

int main() {
    cout << "Xin chao !\n"; // cout giống printf bên c
    cout << sizeof(bool) << endl; // endl dúng \n xuống hàng bên c
    cout <<INT_MIN << " " << INT_MAX << endl;
    int Radius , t;
    cout << "Hay nhap gia tri cho Radius và t: " << endl;
    cin >> Radius >> t; // nhập giá trị vào bàn phím 
    cout << Radius << " " << t << endl; // in ra giá trị cho màn hình 
    float a;
    cout << "Hay nhap gia tri cho a: " << endl;
    cin >> a;
    cout << fixed << setprecision(2) << a << endl; // fixed và setprecision thì để độ chính xác trong c ++ thư viện dùng là iomanip
    bool ok = true; // 1 is true, 0 is false
    cout << ok << endl;
    return 0;
}
