#include<iostream>

using namespace std;

int main() {


    float a = 5.7;
    float *ptr = &a;

    (*ptr)++;

    cout<<"Increament: "<<a<<endl;

    (*ptr)--;

    cout<<"Decreament: "<<a<<endl;

}