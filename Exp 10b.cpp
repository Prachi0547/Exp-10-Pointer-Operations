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
