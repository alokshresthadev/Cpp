#include<iostream>
using namespace std;
void func(int a, int b){
    cout<<a+b<<endl;
}
void func(int a){
    cout<<a<<endl;
}
void func(char a){
    cout<<a<<endl;
}
int main(){
    func(2);
    func(3,5);
    func('a');
    return 0;
}