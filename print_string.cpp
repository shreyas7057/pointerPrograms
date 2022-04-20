#include<iostream>

int main() {

    std::string name;

    std::cout<<"Enter string: ";
    getline(std::cin,name);

    std::string *ptr = &name;

    std::cout<<*ptr;

    return 0;
}