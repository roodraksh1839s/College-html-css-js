#include<iostream>
using namespace std;

class A {
public:
    A(string a) {
        cout << "HELLO_" << a << endl;
    }
    A(int b) {
        cout << "THIS NUMBER IS: " << b << endl;
    }
};

class B : public A {
public:
    // Correct initialization of A's constructor with a string
    B(string a) : A(a) {
        cout << "GOOD MORNING " << a << endl;
    }
    // Correct initialization of A's constructor with an int
    B(int b) : A(b) {
        cout << "NUMBER FROM CLASS B IS: " << b << endl;
    }
};

class C : public B {
public:
    // Constructor for class C, passing parameters to B (and B to A)
    C(string a1, string a2, string a3) : B(a2) { // B(a2) calls A(a2)
        cout << "GOOD NIGHT " << a3 << endl;
        cout << "HELLO_" << a1 << endl;  // Displaying the first string directly
    }
    
    // Constructor for class C, passing integers
    C(int b1, int b2, int b3) : B(b2) { // B(b2) calls A(b2)
        cout << "NUMBER FROM CLASS C: " << b3 << endl;
    }
};

int main() {
    // Using string-based constructors for class C
    cout << "String input case:" << endl;
    C cc1("Sameer", "Kunal", "Aksh");  // First string to A via B, second to B, third to C
    cout << endl;

    // Using integer-based constructors for class C
    cout << "Integer input case:" << endl;
    C cc2(1, 2, 3);  // First int to A via B, second to B, third to C

    return 0;
}

