#include <iostream>

using namespace std;

int main()
{
    // declare integar with value of 1
    int foo = 1;
    //Point to memory address of foo
    int *bar = &foo;
    //output value of foo
    cout << foo << endl
    //output memory address of foo
    cout << bar << endl
    //output value at the memory address of foo
    cout << *bar << endl 
    return 0;
}