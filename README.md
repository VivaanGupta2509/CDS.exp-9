# EXPERIMENT 9

## Aim -
To study and implement pointers basics in c++

## Theory -
Pointer is a variable that holds the memory address of another variable.<br>
Pointers are crucial for dynamic memory management, working with arrays, and efficient handling of large data structures.

### 1. *Declaring a Pointer*
A pointer is declared by specifying the type of the data it points to, followed by an asterisk (*), and then the pointer variable name.

```
int* ptr;   // Pointer to an integer
char* cptr; // Pointer to a character
```

### 2. *Pointer Initialization*
To store the address of a variable in a pointer, use the address-of operator (&).

```
int x = 5;
int* ptr = &x; // ptr stores the address of x
```

### 3. *Dereferencing a Pointer*
To access the value at the memory location a pointer points to, use the dereference operator (*).

```
int x = 5;
int* ptr = &x;
cout << *ptr; // Output: 5 (value at the address stored in ptr)
```

### 4. *Pointer Arithmetic*
Pointers can be incremented or decremented to traverse memory locations. Pointer arithmetic depends on the data type the pointer is pointing to.

```
int arr[] = {1, 2, 3, 4};
int* ptr = arr;

ptr++;  // Moves to the next element in the array (because it's int*, it moves 4 bytes ahead)
```

### 5. *Dynamic Memory Allocation*
Pointers are essential when working with dynamic memory allocation using new and delete.

```
int* ptr = new int; // Allocates memory for an integer
*ptr = 5;          // Assigns value
delete ptr;        // Deallocates memory
```

## Code - 
### A
```
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
```
### B 

```
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
```

### C
```
#include <iostream>
using namespace std;
int main()
{
    int *p ,b=10;
    p = &b ;
    cout <<"Value at *p = "<<*p<< endl << "value at b = " << b << endl <<"value at p = "<<p<< endl <<"value at &b = "<<&b<<endl;
    p++;
    cout<<"After increment = " <<p<<endl;
    float *n, a=8.923;
    n=&a;
    cout<< endl<<*n<<"  "<<a<<endl<<n<<"  "<<&a<<endl;
    n++;
    cout<<" After increment = " <<n <<endl;
    char *ch, c(10);
    c='#';
    ch=&c;
    cout<< endl<< (void*)ch<<"  "<<endl;
    ch++;
    cout<<" After increment:" << (void*)ch<<endl;
    return 0;
}
```

## Output - 
### A - 
