#include<iostream>
using namespace std;
    int sum(int x, int y){
        return x+y;
    }
int main(){
    cout<<"hello world "<<endl;
    cout<<"hello GitHub"<<endl;
    int a,b;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    cout<<"sum is "<<sum(a,b)<<endl;
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

