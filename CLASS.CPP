#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int id;

    void getData(){
        cout<<"Enter name and id:";
        cin>>name>>id;
    }
    void Display(){
        cout<<"Name = "<<name<<endl;
        cout<<"Id = "<<id<<endl;
    }
};
int main(){
    Person p;
    p.getData();
    p.Display();
    return 0;
}