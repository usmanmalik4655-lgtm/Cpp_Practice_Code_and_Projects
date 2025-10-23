#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter your numbers:" << endl;
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            // a is max
            if (b < c) {
                cout << "max = " << a << endl;
                cout << "min = " << b << endl;
            } else {
                cout << "max = " << a << endl;
                cout << "min = " << c << endl;
            }
        } else {
            // c is max
            cout << "max = " << c << endl;
            cout << "min = " << b << endl;
        }
    } else if (b > c) {
            // b is max
            if (a < c) {
                cout << "max = " << b << endl;
                cout << "min = " << a << endl;
            } else {
                cout << "max = " << b << endl;
                cout << "min = " << c << endl;
            }
    } else {
            // c is max
            cout << "max = " << c << endl;
            cout << "min = " << a << endl;
    }

    return 0;
}
