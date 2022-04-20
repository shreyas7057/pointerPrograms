#include<iostream>

using namespace std;

int main() {

    int a=10,b=20,res;
    int *p1,*p2;

    p1 = &a;
    p2 = &b;

    res = *p1+*p2;

    cout<<"Sum of nums: "<<res<<"\n";


    return 0;
}