void func(int) {}

int main() {
   
    int i = 0x7fff;
    long l;
    float f;
    // (l) Typical castless conversions:
    l = i; 
    f = i;
    l = static_cast<long>(i);
    f = static_cast<float>(i);

    // (2) Narrowing conversions:
    i = l; // May lose digits 
    i = f; // May lose info
    i = static_cast<int>(l);
    i = static_cast<int>(f);
    char c = static_cast<char>(i);

    //(3) Forcing a conversion from void* :
    void* vp = &i;
    // Old way produces dangerous conversion:
    float* fp = (float*)vp;
    // The new way is equally dangerous.
    fp = static_cast<float*>(vp);
    //(4) Implicit type conversion, normally
    // performed by the compiler 
    double d = 0.0;
    int x = d; 
    x = static_cast<int>(d); // More explicit
    func(d);
    func(static_cast<int>(d));
}
