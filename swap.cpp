#include<iostream>

using namespace std;

int main() {


    int a = 10,b = 20;

    int *ptr1,*ptr2,*temp;

    ptr1 = &a;
    ptr2 = &b;

    cout<<*ptr1<<*ptr2<<"\n";

    cout<<"Before swapping ptr1: "<<ptr1<<"\n";
    cout<<"Before swapping ptr2: "<<ptr2<<"\n";

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    cout<<*ptr1<<" "<<*ptr2;
    cout<<"\n";

    cout<<"After swapping ptr1: "<<ptr1<<"\n";
    cout<<"After swapping ptr2: "<<ptr2<<"\n";
}