#include<iostream>

class Car {
    private: 
        int privateInt; // this is a private integer
    public:
        std::string brand; //This is a public string
        std::string model;
        int year;           //why is int different? Is that because String is a data structure where int is a simple type?
        void setPrivateInt(int newValue); //This is a public method accessing a private string
};

int main() {
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 2021;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 2022;

    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n"; 
    return 0;
}






// class MyClass {
//     public:
//         int myNum;
//         std::string myString; //string myString doesn't work because???
// };

// int main() {
//     MyClass myObj;

//     myObj.myNum = 15;
//     myObj.myString = "Samuel";

//     std::cout << myObj.myNum << "\n";
//     std::cout << myObj.myString;
//     return 0;
// }