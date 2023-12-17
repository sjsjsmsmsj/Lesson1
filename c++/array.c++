#include <iostream>
#include <math.h>
using namespace std;
// hàm nguyên tố
bool Prime(int n) {
    for (int i = 2; i <= sqrt(n); i ++) {
        if(n % i == 0) 
            return false;
    }
    return n > 1;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++) {
        cin >> a[i]; // nhập mảng
    }
    // cách 1 in ra mảng 
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    // cách 2 để in ra mảng 
    for(int x : a) {
        cout << x << " ";
    }
    for (int i = 0; i < n; i++) {
        if(Prime(a[i]))
            cout << "Prime = " << a[i] << endl;
    }
    // ví dụ bài tính tổng các phần tử trong mảng
    int sum = 0; // khai báo biến sum để tính tổng sum ban đầu bằng 0
    for(int i = 0; i < n; i ++) {
        sum += a[i]; 
        // cộng từng phần tử trong mảng sum += a[0], sum = a[0], sau đó i ++ thì sum += a[1] thì sum lúc đó sẽ được a[0] + a[1]
    }
    cout << "sum = " << sum << endl;
    return 0;
    //int b[n] = {0}; // này thì gán tất cả các phần tử trong mảng đều = 0

}