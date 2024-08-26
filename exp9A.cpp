#include <iostream>
using namespace std;
int main(){
    int var = 100;
    int *ptr;
    ptr = &var;
    cout<<"Value at var = "<<var<<endl;
    cout<<"Value at ptr = "<<ptr<<endl;
    cout<<"Value at *ptr = "<<*ptr<<endl;
}