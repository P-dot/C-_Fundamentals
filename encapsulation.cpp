#include <iostream>
using namespace std;
class ExampleEncap {
private:
	/*Private data members*/
    int num;
    int ch;
public:
       /*Getter functions to get the values of data memeber */
    int getNum() const {
        return num;
    }
    char getCh() const {
        return ch;
    }

    /*Setter functions, they are called assigning the values to the private data members */

    void setNum(int num) {
        this->num = num; 
    }
    void setCh(char ch) {
        this-> ch = ch;
    }
};

int main() {
    ExampleEncap obj;
    obj.setNum(100);
    obj.setCh('A');
    cout<<obj.getNum()<<endl;
    cout<<obj.getCh()<<endl;

    return 0;
}
