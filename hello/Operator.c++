#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b;
    float tong;
    cin >> a >> b;
    tong = a + b;
    tong = a % b;
    
    tong = a * b;
    tong = a / (float)b;
    cout << fixed << setprecision(2) << tong << endl;
    int res = (a != b) && a > b;
    cout << res << endl;
    return 0;
}