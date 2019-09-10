#include <string>
#include <iostream>
#include <fstream>

//Copy an entire file in one only object string
int main() {
    ifstream in("FillString.cpp");
    string s, line;
    while(getline(in, line))
       s += line + "\n";
}
