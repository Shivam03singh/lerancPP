#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    void setData(int a,int b){
        real=a;
        imaginary=b;       
    }
    void getData(){
        cout<<"the value of complex no is "<<real<<"+"<<imaginary<<"i"<<endl;
    }

};
int main(){
complex *ptr=new complex;
ptr->setData(3,4);
ptr->getData();
return 0;

}
