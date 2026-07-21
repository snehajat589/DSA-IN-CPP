#include<iostream>
using namespace std;
int main(){
    string username , password;
    cout<<"Enter username : ";
    cin>>username;
    
     cout<<"Enter password : ";
     cin>>password;
    
     if(username == "sneha" &&  password == "12345")
     {
        cout<<"login successful ";
     }
     else{
        cout<<"Invalid username or password ";
     }
    return 0;
}