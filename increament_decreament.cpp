#include<iostream>
using namespace std;
int main() {

    int a =10;

    int *p = &a;

    (*p)++;

    cout<<"Increament: "<<a<<"\n";

    (*p)--;
    cout<<"Decreament: "<<a<<"\n";

    return 0;
}