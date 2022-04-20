#include<iostream>

int main() {

    int a = 10,b = 5,res;
    int *ptrA,*ptrB;

    ptrA = &a;
    ptrB = &b;

    res = *ptrA-*ptrB;

    std::cout<<"Subtraction of nums: "<<res;
}