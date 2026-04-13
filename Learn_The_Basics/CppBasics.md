------------------------------------------------------------------------ Data Types in C++ 
-------------------------------------------------------------------------- char - 1 (signed -> -128 to 128)/ (unsigned - 0 - 255)
- bool -1 (0/1)
- short - 2 (-32000 to 32000)
- Unsigned short - 2 (0 to 65000)
- int - 4 ( -2B to 2B) (10 to power 9)
- long - 4/8 (Windows - 4 , Linux - 8)
- long long - 8 (10 to Power 18) 
- float - 4 (Precision - 6-7 Digits)
- double - 8 (Precision - 15 Digits)
- long double - 8/16 (Precision - 18-21 Digits)
-------------------------------------------------------------------------Pointers & Refetences 
-------------------------------------------------------------------------- Memory Address in C++ is an hexadecimal number 
- Address of Operator ---> & (gives address of the variable)
- Pointers - Special Variable that stores address of other variables. (*)
int* ptr = &b;
Means ---> 
(ptr == &b)
(*ptr == b)
(&ptr == address of ptr)
Above Line stores address of b.

Pointer will have its own address but stores address of another variable. 
- To store address of a pointer , double pointer is used (**)
- int** p = &ptr;
- Above p is pointer to pointer 

Nutshell ---> 
&ptr ---> gives memory address of ptr 
*ptr ---> gives value stored in address stored by ptr
ptr ---> gives the value stored at the address contained in ptr 

Dereferencing Operator --> (*)
---> Gives Value at Address
*penptr ---> gives value stored at the address contained in penptr. 
**penptr ---> gives the value stored at the address contained in the pointer stored at the address contained in penptr

    int a = 10;
    int* ptr = &a;
    int** penptr = &ptr;
•  ptr ---> gives &a 
• *ptr ---> gives a 
• &ptr ---> gives address of ptr
• penptr ---> gives &ptr 
• *penptr ---> gives ptr or &a
• **penptr ---> gives a
• &penptr ---> gives address of penptr

Master Example ---> 

a ---> address - 100 ---> value - 5
p ---> address - 500 ---> value - 100
q ---> address - 700 ---> value - 500

int a = 5;
int* p = &a;
int** q = &p;

cout<< *p << endl;
---> *(p) ---> *(&a) ---> *(100) ---> 5
cout<< **q  << endl
---> *(*(&p)) ---> *(*(500)) ---> *(100) ---> 5
cout<< p << endl;
---> p ---> 100 
cout << *q << endl;
---> *(q) ---> *(&p) ---> *(500) ---> 100
-------------------------------------------------------------------------Pass By Value , Pass By Reference
-------------------------------------------------------------------------
1 ---> Pass by Reference using Pointers 
void changeA(int* a){
    *a = 1000;
}
int main() {
    int a = 50;
    changeA(&a);
    cout<<a<<endl;
    return 0;
}

2 ---> Pass by Reference using Alias 
void changeA(int &a){
// Here a is alias. 
    a = 1000;
}
int main() {
    int a = 50;
    changeA(a);
    cout<<a<<endl;
    return 0;
}

Difference ---> 
The alias is just another name to the same memory location. 
In pointer , the function parameter recieves the memory address of the variable. 
-------------------------------------------------------------------------
Array Pointer & Pointer Arithmetic 
-------------------------------------------------------------------------
Array Pointer is a constant pointer. It is in sense not a pointer , just a identifier but behaves like a decay when & , * is used over it. 
The "arr" is fixed to the base address of arr and cannot be changed. 

Ex ---> 
int arr[5] = {1 , 2 , 3 , 4 , 5};
cout<<*(arr) , *(arr+1)
Prints Values of array 
But , 
int x = 1000;
arr = &x; 
Not Possible 

Pointer Arithmetic ---> 
// address of a = 100
int a = 10;
int* ptr = &a;
cout<<ptr ---> Prints 100
ptr++;
cout<<ptr ---> Prints 104
-------------------------------------------------------------------------
#include <bits/stdc++.h> 
---> Header file used widely for GCC Compilers 
---> Contains references to nearly every standard C++ library header
-------------------------------------------------------------------------
