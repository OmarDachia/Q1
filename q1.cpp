//We import all the resources we need. in this, we only need iostream for user input/output
#include <iostream> //is a header file library that lets us work with input and output objects,
// such as cout (used in line 5). Header files add functionality to C++ programs.

using namespace std; //means that we can use names for objects and variables from the standard library.

int main() { //This is called a function. Any code inside its curly brackets {} will be executed.

    cout << "Q1:-> Write a program to print any message on the screen"; //(pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!"
    cout << "\n========================================================";
    cout << "\nResult Start here:->";
    cout << "\n++++++++++++++++++++\n";
    cout << "Any Message!";
  //Note: Every C++ statement ends with a semicolon ;

  return 0; //ends the main function.
}
