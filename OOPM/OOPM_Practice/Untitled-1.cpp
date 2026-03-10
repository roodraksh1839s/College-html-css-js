#include <iostream>
using namespace std;

void demo() {
    static int count = 0; // Static variable
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    demo();
    demo();
    return 0;
}
