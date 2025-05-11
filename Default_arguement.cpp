#include<iostream>
using namespace std;
void func(int a,int b = 1, int c = 2){
    cout<<a+b+c<<endl;
}
int main(){
    func(4);
    func(2,4);
    func(5,3);
    return 0;
}