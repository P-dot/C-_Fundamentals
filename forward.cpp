#include <iostream>
using namespace std;

// Forward function and data declarations
// This is not actuallu external, but the compiler must be told 
// it exists somewhere

extern int i;
extern void func();

int main() {
    i = 0;
    func();
}

int i; // The data definition

void func() {
    i++;
    cout << i;
}
