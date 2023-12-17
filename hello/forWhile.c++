#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cout << "Please, input an integer for n : " << endl;
    cin >> n;
    int total = 0;
    for(int i = 1; i <= n; i ++) {
        total += i;
    }
    cout << "After running for, you will to see total = " << " " << total << endl;
    return 0;
}