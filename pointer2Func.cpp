#include <iostream>
// Defining and using a pointer to function
using namespace std; 

void func() {
   cout << "func() called..." << endl;
}

int main() {
   void (*fp)();  // Define a function pointer 
   fp = func;      // Initialize itç
   (*fp)(); // Dereferenciing calls the function 
   void (*fp2)() = func;  // Define and initialize 
   (*fp2)();
}
