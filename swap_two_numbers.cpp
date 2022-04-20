#include<iostream>

using namespace std;

int main() {

    int a=10,b=20,*ptr1,*ptr2,temp;

    ptr1 =  &a;
    ptr2 = &b;

    cout<<"Before swapping nums are: a and b: "<<*ptr1<<" "<<*ptr2;
    cout<<"\n";

    cout<<"Address of a: "<<&a<<"\n";
    cout<<"Address of b: "<<&b<<"\n";

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    cout<<"After swapping nums are: a and b: "<<*ptr1<<" "<<*ptr2;
    cout<<"\n";

    cout<<"Address of a: "<<&a<<"\n";
    cout<<"Address of b: "<<&b<<"\n";

    return 0;
}