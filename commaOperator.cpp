#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = (b++, c++, c++, e++);
    cout << "a = " << a << endl;
    //Withour parenthesis the statement will evaluate to:
    (a = b++), c++, d++, e++;
    cout << "a = " << a << endl;
}
