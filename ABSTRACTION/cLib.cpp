#include "cLib.h"
#include <iostream>
#include <cassert>

using namespace std;

// Implementation of a C-like library 
// Declare structure and functions:

// Quantity of elements to add 
// when increasing storage:
const int increment = 100;

void initialize(CStash* s, int sz) {
   s->size = sz;
   s->quantity = 0;
   s->storage = 0;
   s->next = 0;
}

int add(CStash* s, const void* element) {
   if(s->next >= s->quantity) // Enough space left 
      inflate(s, increment);
   // Copy element into storage 
   // starting at next empty space:
   int startBytes = s->next * s->size;
   unsigned char* e= (unsigned char*)element;
   for(int i = 0; i < s->size; i++)
       s->storage[startBytes + i] = e[i];
   s->next++; 
   return(s->next -1);
}

int count(CStash* s) {
   return s->next;  // Elements in Cstash 
}

void inflate(CStash* s, int increase) {
   assert(increase > 0);
   int newQuantity = s->quantity + increase;
   int newBytes = newQuantity * s->size;
   int oldBytes = s->quantity * s->size;
   unsigned char* b = new unsigned char[newBytes];
   for(int i = 0; i < oldBytes; i++)
      b[i] = s->storage[i]; // Copy old to new 
   delete [](s->storage); // Old storage 
   s->storage = b;
   s->quantity = newQuantity;
}

void cleanup(CStash* s) {
   if(s->storage != 0) {
      cout << "freeing storage"<< endl;
      delete []s->storage;
   }
}
