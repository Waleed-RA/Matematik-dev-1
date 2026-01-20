#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    cout << "a degerini giriniz: ";
    cin >> a;
    cout << "b degerini giriniz: ";
    cin >> b;
    cout << "c degerini giriniz: ";
    cin >> c;

    delta = b*b - 4*a*c;
    cout << "Diskriminant = " << delta << endl;

    if (delta < 0) {
        cout << "Gercek kok yoktur." << endl;
    } 
    else if (delta == 0) {
        x1 = -b / (2*a);
        cout << "Tek gercek kok vardir: x = " << x1 << endl;
    } 
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "Iki farkli gercek kok vardir:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}

