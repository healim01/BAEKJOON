// https://www.acmicpc.net/problem/10872
#include <iostream>
using namespace std;

int fact(int n) {
    if (n<2) return 1;
    else return n * fact(n-1);
}

int main() {
    int n;
    cin >> n;

    cout << fact(n) << "\n";
}