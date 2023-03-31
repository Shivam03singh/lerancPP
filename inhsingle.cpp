#include<iostream>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void set_data();
    int get_data1();
    int get_data2();
};
void base::set_data(){
    data1=10;
    data2=20;
}
int base::get_data1(){
    return data1;
}
int base::get_data2(){
    return data2;
}
class derived:public base{
    int data3;
    public:
    void process();
    void display();
};
void derived :: process(){
    data3=data2*get_data1();
}
void derived :: display(){
    cout<<"the value of data1 is :-"<<get_data1()<<endl;
    cout<<"the value of data2 is :-"<<data2<<endl;
    cout<<"the value of data3 is :-"<<data3<<endl;
}
int main(){
    derived obj;
    obj.set_data();
    obj.process();
    obj.display();
    return 0;
}