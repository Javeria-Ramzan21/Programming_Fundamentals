#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other)
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void display()
     {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 1.0);

    Complex result = c1 + c2;
    result.display();

    return 0;
}
