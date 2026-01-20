#include <iostream>
using namespace std;
int main() {
    int Userinput1;
    int Userinput2;
    int summedinputs;
   std::cout<<"Enter your first number: ";
    std::cin >> Userinput1;

    std::cout<<"Enter a second number: ";
    std::cin >> Userinput2;
    summedinputs = Userinput1 + Userinput2;
    std::cout<<"The sum of your two inputs is equal to:" <<summedinputs << std::endl;
return 0;
}