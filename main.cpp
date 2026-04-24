#include <iostream>
#include <algorithm>
int main () {
    std::string password = "";
    std::cout<<"===================\n";
    std::cout<<"Password Checker\n";
    std::cout<<"===================\n\n";
    std::cout<< "Enter your password: ";
    std::cin >> password;

    std::string special_char = "@#$%&)(~^*+_-=`";
    std::string num = "1234567890"; 
    while (password.length() < 8 || password.find_first_of(special_char) == std::string::npos || password.find_first_of(num) == std::string::npos) {
        if (password.length() < 8) {
        std::cout<< "Invalid password. Password has less than 8 char\n";
        std::cout<< "Try Again: ";
        std::cin >> password;
        }
        else if (password.find_first_of(special_char) == std::string::npos && password.length() >= 8) {
        std::cout<< "Use special Characters in your password\n";
        std::cout<< "Try Again: ";
        std::cin >> password;
        }
        else if (password.find_first_of(special_char) == std::string::npos && password.length() >= 8 && std::string::npos || password.find_first_of(num) == std::string::npos) {
        std::cout<< "Use atleast 1 integer in your password\n";
        std::cout<< "Try Again: ";
        std::cin >> password;
        }
    }
    std::cout << "You passed";
}