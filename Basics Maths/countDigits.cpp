#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) {
        return 1;
    }

    int cnt = 0;

    while (n > 0) {
        cnt++;
        n = n / 10;
    }

    return cnt;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        cout << countDigits(n) << endl;
    }

    return 0;
}