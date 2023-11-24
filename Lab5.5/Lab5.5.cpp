#include <iostream>
using namespace std;

int f(int n, int level, int& depth) {

    if (n == 0) {
        if (level > depth) {
            depth = level;
        }
        cout << " level = " << level << endl;
        return 0;
    }
    else {
        int res = n % 10 + f(n / 10, level + 1, depth);
        return res;
    }


}

int main() {

    int n;
    cout << " n = "; cin >> n;
    int depth = 0;
    int sum = f(n, 1, depth);

    cout << " Sum number " << n << " = " << sum << endl;
    cout << " Depth = " << depth << endl;

    return 0;
}