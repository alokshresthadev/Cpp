#include<iostream>
void fun(int &x){
    x = 10;
}
int main(){
    int a = 5;
    fun(a);
    std::cout<<a<<std::endl;
    return 0;
}