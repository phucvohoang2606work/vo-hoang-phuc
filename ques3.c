#include <stdio.h>
#include <iostream>
#include <malloc.h>
#include <initializer_list>
#include <string>
#include <math.h>
using namespace std;
template <typename T>
class ptbac2 {
public:
	T a, b, c;     // f(x) = ax^2 + bx + c = 0
	double x1, x2, real, imag;
	ptbac2() {
		a = 0; b = 0; c = 0;
	}
    ptbac2(T _a, T _b, T _c) {
        a = _a; b = _b; c = _c;
    }
	void timnghiem() {
		double delta; 
		if (a == 0) {
            if (b != 0) cout << "root 1: " << -(double)c / b << endl;
            else if (c == 0) cout << "vo so nghiem" << endl;
			else cout << "Invalid" << endl;
		}
        else {
            delta = b * b - 4 * a * c;
            if (delta > 0) {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                cout << "root 1: " << x1 << " and root 2: " << x2 << endl;
            }
            else if (delta == 0) {
                x1 = x2 = -(double)b / (2 * a);
                cout << "double root: " << x1 << endl;
            }
            else {
                real = -b / (2 * a);
                imag = sqrt(-delta) / (2 * a);
                cout << "real: " << real << " and imag: " << imag << endl;
            }
        }
	}
};
void ques2() {
    ptbac2 <double> a(4,4,1);
    a.timnghiem();    
}
