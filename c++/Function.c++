#include<iostream>
#include<iomanip>
using namespace std;
void helloWorld(int n, int m) {
    cout << n * m << endl;
}
int main() {
    int n, m;
    cin >> n >> m;
    helloWorld(n, m);
    return 0;
}