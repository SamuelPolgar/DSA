#include <iostream>
using namespace std;

class Box{
    public: 
        int width = 10;
        int length = 15;
        int getArea(){
            return width*length;
        }
};
int main(){
    Box b;
    Box *ptr = &b;

    cout << "Box length is: " << b.length << "\n";
    cout << "Box length is2: " << ptr->length;
}

