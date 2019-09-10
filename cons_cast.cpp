int main() {
    const int i = 0;
    int * j = (int*)&i; // Deprecated mode
    j = const_cast<int*>(&i); // Preferred 
    // Can't do simultaneous original casting: 
    // ! long* l = const_cast<lon*>(&i); // Error
    volatile int k = 0;
    int* u = const_cast<int*>(&k);
}
