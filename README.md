# Exp-10-Pointer-Operations
# Aim
Write a c++ program:
1. To swap the numbers using call by value.
2. To swap the numbers using call by reference.
# Software Used
VS Code and c++ online compiler.
# Theory
In C++, functions can receive arguments in two primary ways: call by value and call by reference.

In call by value, a copy of the actual argument is passed to the function. This means that modifications made to the parameter inside the function do not affect the original argument.

In call by reference, instead of passing a copy, a reference (or alias) to the original variable is passed to the function. This means any changes made to the parameter affect the original argument.

Call by value is safer for primitive types where data integrity is crucial, while call by reference is advantageous for larger data structures where performance is a concern. 

# Program Code
```
//Call by value

#include <iostream>
using namespace std;
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
   cout<<"Inside swabByValue function: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main()
 
{ int a=3,b=8;
cout<<"Before swabByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
```
```
//Call by reference.

#include <iostream>
using namespace std;
 void swap(int *a,int* b)
 
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
  cout<<"Inside swabByReference function: "<<"a = "<< *a<<" , "<<"b = "<< *b<<endl;
    
}
 int main()
 
{ int a=3,b=8;
cout<<"Before swabByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(&a,&b); 
cout<<"After swapByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
```

# Output
### Call by value
![image](https://github.com/user-attachments/assets/5755d007-2e7d-4041-abb5-1cc666eb1222)
### Call by reference
![image](https://github.com/user-attachments/assets/222a6d4a-6451-44e4-87ae-2b63e1be5d02)

# Conclusion
We learnt how to swap the numbers using call by value and call by reference.
