#include<iostream>
using namespace std;
int main(){
    //checking the marks atleast 40 of the student//

    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if(marks>=40){
        cout<<"student has passed ";
    }
    else{
        cout<<"student has failed ";
    }
    return 0;
    }


