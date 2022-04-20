#include<iostream>

using namespace std;

int main() {

    int a = 10;
    int *ptrA = &a;

    cout<<"Size of a: "<<sizeof(a)<<"\n";
    cout<<"Size of ptrA: "<<sizeof(ptrA)<<"\n";

    char c = 'A';
    char *ptrC = &c;

    cout<<"Size of c: "<<sizeof(c)<<"\n";
    cout<<"Size of ptrC: "<<sizeof(ptrC)<<"\n";

    return 0;
}