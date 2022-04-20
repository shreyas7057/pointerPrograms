#include<iostream>

int main() {

    int a = 10;

    int *p = &a;

    std::cout<<"Value of a: "<<*p<<std::endl;
    std::cout<<"Address of a: "<<&a<<std::endl;

    return 0;
}