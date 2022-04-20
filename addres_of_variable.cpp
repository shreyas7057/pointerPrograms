#include<iostream>

int main() {

    int a = 10;
    int *ptr = &a;

    std::cout<<"Address of a: "<<ptr<<std::endl;
    std::cout<<"Value of a: "<<*ptr<<std::endl;

    return 0;
}