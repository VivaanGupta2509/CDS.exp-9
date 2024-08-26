#include <iostream>
using namespace std;
int main(){
    int *ptr = new int[5];
    // initialize array 
    for(int i=0;i<5;i++){
        ptr[i]=10*(i+1);
    }
    // printing the values using pointers 
    cout<< *ptr << endl;
    cout<< *ptr +1 << endl;
    cout<< *(ptr +1) << endl;   
    cout<< 2[ptr] << endl; 
    cout<< ptr[2] << endl; 
    *ptr++;
    cout<< *ptr<<endl;
    return 0;
}