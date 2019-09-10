#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    ifstream in ("fillVector.cpp");
    string line;
    while(getline(in, line));  // Add the line to the end 
      v.push_back(line);
    // Add line numbers:
    for(int i = 0; i < v.size(); i++)
        cout << i << ":" << v[i] << endl;
}
