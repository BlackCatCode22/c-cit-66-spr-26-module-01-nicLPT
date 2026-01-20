#include <iostream>
using namespace std;
int main() {
   std::string user_name;
    std::cout << "Please enter your name:";
    std::cin >> user_name;
    std::cout << "Hello, nice to meet you, " << user_name << "." << std::endl;
return 0;
}