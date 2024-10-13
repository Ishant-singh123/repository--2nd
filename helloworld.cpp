#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age>18){
        cout<<"you are adult "<<endl;
    }
    else if(age==18){
        cout<<"going to adult "<<endl;
    }
    else{
        cout<<"you are boy "<<endl;
    }
    
    return 0;
}