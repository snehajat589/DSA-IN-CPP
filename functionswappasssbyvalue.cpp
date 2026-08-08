#include<iostream>
using namespace std;
   int swap(int a , int b){   //parametrized function//
    int temp;
    temp = a;
    a = b;
    b = temp;
 
    cout << "Inside function: a = " << a << " b = " << b << endl;
   } 

   int main(){
    //pass by value//
    int a = 10 , b = 30 , temp;
    swap(a, b);
    cout << "Outside function: a = " << a << " b = " << b << endl;
    return 0;
   }
  
