#include<iostream>

int main() {

    char vowels[20];
    char *ptrVowels;
    std::cout<<"Enter string: ";
    std::cin>>vowels;

    ptrVowels = vowels;

    int count = 0;

    while(*ptrVowels!='\0') {
        count++;
        ptrVowels++;
    }

    std::cout<<count;

    return 0;
}