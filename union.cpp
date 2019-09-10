#include <iostream>
using namespace std;
// The size and simple use of a union 

union packed { // Declaration similar to a class
   char i; 
   short j;
   int k;
   long l;
   float f;
   double d;
   // The union will be the size of a double since that's is the largest element
}; // Semicolon ends a union like a struct 

int main() {
   cout << "sizeof(packed) = "
	<< sizeof(packed) << endl;
   packed x;
   x.i = 'c';
   cout << x.i << endl;
   x.d = 3.14159;
   cout << x.d << endl;
}
