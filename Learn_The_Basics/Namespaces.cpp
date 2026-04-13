// Namespaces

#include <bits/stdc++.h>

namespace A
{
    void display()
    {
        cout << "This is namespace A" << endl;
    }
}

namespace B
{
    void display()
    {
        cout << "This is namespace B" << endl;
    }
}

using namespace std;
using namespace A;
using namespace B;
int main()
{
    // A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.

    // :: is scope resolution operator. 
    // std namespace consists of like cout, cin, endl, vector, string, etc. which are used in C++ programming.

    // Std is a namespace that contains all the standard C++ library functions and objects. By using the statement "using namespace std;", we can access all the members of the std namespace without having to prefix them with "std::".
    // Example without using namespace std
    std::cout << "Hello, World!" << std::endl;
    // Example with using namespace std
    cout << "Hello, World!" << endl;

    // display(); // This will cause an error because both namespace A and B have a function named display().

    // Correct Way ---> 
    A::display();
    B::display();

    return 0;
}