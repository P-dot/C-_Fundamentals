#include "cLib.h"
#include "cppLib.h"
#include <iostream>
using namespace std;

struct A {
    int i[100];
};

struct B {
    void f();
};

void B::f() {}

int main() {
    cout << "sizeof struct A = " << sizeof(A)
	 << " bytes" << endl;
    cout << "sizeof struct B = " << sizeof(B)
	 << " bytes" << endl;
    cout << "sizeof Cstash in C = " 
	 << sizeof(CStash) << " bytes" << endl;
    cout << "sizeof Stash in C++ = "
	 << sizeof(Stash) << " bytes" << endl;
}
