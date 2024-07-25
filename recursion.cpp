#include <bits/stdc++.h>
using namespace std;


/*
Recursion : It is a process in which a function calls itself as a subroutine. This allows the function to be repeated several times, since it calls itself during its execution.
Base case : It is the condition that stops the recursive function from calling itself. It is the condition that is used to break the recursion.
Stack Overflow: It is a situation when a program runs out of memory to store the function call. This situation occurs when a function calls itself so many times that the memory required to store the function call is more than the memory allocated to the program.
Recursion tree : It is a tree that represents the function calls in a recursive function. It is a tree that shows the function calls and the order in which they are called.

*/



void add(int a){
    if(a==0){
        return;
    }
    add(a-1);
    cout << a << " ";
}

int main(){
    add(7);
    return 0;
}