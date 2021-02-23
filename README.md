# GitHub Instructions
echo "# DSA" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/SamuelPolgar/DSA.git
git push -u origin main

Making updates
git add filename||file/*    (uploads to index)
git commit                  (commits to a fork?)
git push                    (pushes to remote repo)
git status                  (Check status of working tree)
git pull                    (Pull latests remote repo)
git close                   (Clone repo to new dir)


# C++ Commands
> Default compiling: Navigate to Dir > g++ filename.cpp == a.out
> Custom exe compiling: g++ -o hello filename.cpp
> Running c++: ./hello

#C++ Notes
> #include <iostream> == include the iostream file (which has the cout command)
> int main() {..} == C++ main method, running automatically
> std::cout <<""; prints contents within the quotation marks ""
> return 0 ends the program

```
Hello
```


## Links
#### [Good Readme](https://www.makeareadme.com/)
#### [Update my GitHub](https://www.tutsmake.com/upload-project-files-on-github-using-command-line/)
#### [Git add](https://github.com/git-guides/git-add)
#### [Git overview](https://www.earthdatascience.org/workshops/intro-version-control-git/basic-git-commands/d)
#### [Git crash course](https://www.youtube.com/watch?v=SWYqp7iY_Tc)
#### [C++ Hello World](https://www.programiz.com/cpp-programming/examples/print-sentence)
#### [Coding in C++ vsCode](https://code.visualstudio.com/docs/languages/cpp)
#### [Unable to find g++ --version](https://apple.stackexchange.com/questions/254380/why-am-i-getting-an-invalid-active-developer-path-when-attempting-to-use-git-a)
#### [G++ commands](https://www.geeksforgeeks.org/compiling-with-g-plus-plus/)
#### [zsh: permission denied: error]()



# 22/2 
## Links
[Pogramiz](https://www.programiz.com/cpp-programming/pointers)

## Pointer
A pointer is a varaible that stores memory address as it's value
It's created with the * operator
Declare with string* mystring || int* pointVar
Reference operator vs dereference operator
    Reference:      Gets the reference of a string/int. string food = "Pizza"; string foodPtr = &food;
    Dereference:    Gets the string from a reference. *ptr = food 

Why use pointers?
* A variable or object can be modified in a function
* directly manipulate the content of the pointer address

### Example
##Pointer

#include <iostream>
using namespace std;

int main() {
  int var = 5;  //declare the var

  int* pointVar; //declare the pointer

  pointVar = &var; //give the pointer the address


  cout << "Address of var" << pointVar << endl;

  cout << "Value of var" << var << endl;

  cout << "Value from address" << *pointVar << endl;

  return 0;
}


## String
### Links
[Programiz](https://www.programiz.com/cpp-programming/strings)
[String functions](http://www.cplusplus.com/reference/string/string/append/)

```
void display(char *);
void display(string);

int main(){
  string str1;
  char str[100];

  cout << "Enter a string: ";
  getline(cin, str1);

  cout << "Enter another string: ";
  cin.get(str, 100, '\n');

  display(str1);
  display(str);
  return 0;

}

void display(char s[])
{
  cout << "entered char array: " << s << endl;
}

void display(string s)
{
  cout << "entered string array: " << s << endl;
}
```

