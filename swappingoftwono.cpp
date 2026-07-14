#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter number a,b";
    cin>>a>>b;
    temp = a;
     a = b;
     b = temp;
    cout<<"Swap is = "<<a<<b<<endl;
    return 0;

}

