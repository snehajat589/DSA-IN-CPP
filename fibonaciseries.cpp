#include<iostream>
using namespace std;
int main(){
    int n=6, a=10 , b=1,c;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=2; i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;

    }
    return 0;
}