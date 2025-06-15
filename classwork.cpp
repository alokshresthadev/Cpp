//Write a C++ program to display the number of objects created using static member.
//WRONG LOGIC
// #include<iostream>
// using namespace std;
// class first{
//     public:
//     static int first_num;
//         void get(){
//             cout<<"Enter an integer:"<<endl;
//             cin>>first_num;
//         }
//         void submit(){
//             cout<<"The number you entered is:"<<first_num<<endl;
//         }
// };
// int first::first_num;
// int main(){
//     first f1;
//     f1.get();
//     f1.submit();
//     return 0;
// }
//CORRECT LOGIC TRY-1

#include<iostream>
using namespace std;
class CVE{
    public:
    static int RCE;
    static int count;
    void get(){
        cout<<"Enter a number:"<<endl;
        cin>>RCE;
    }
    CVE(){
        count++;
    }

    void send(){
        cout<<"The number of times you inputted is:"<<count<<endl; 
    }

};
     int CVE::RCE;
     int CVE::count =0;

     int main(){
        CVE v1;
        CVE v2;
        CVE v3;
        v1.get();
        v2.get();
        v3.get();
        v3.send();
        return 0;
     }