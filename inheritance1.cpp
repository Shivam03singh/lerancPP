#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id=inpid;
        salary=22.5;
    }
    employee(){}

};
class programe:public employee{
    public:
    int langcode;
    programe(int inpid){
        id=inpid;
        langcode=1;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    programe shiva(34);
    shiva.getdata();
    return 0;
}