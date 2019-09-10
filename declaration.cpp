#include <iostream>

extern int i; // Declaration without definition
extern float f(float); // Function declaration

float b; // Declaration and definiton

float f(float a) {   // Definition
    return a + 1.0;
}

int i; // Definition

int h(int x) {  // Declaration and definition
    return x + 1;
}

int main() {
    b = 1.0;
    i = 2;
    f(b);
    h(i);
}
