#include<iostream>
using namespace std;
class student{
	private:
		string name;
		char grade;
	public:
		void getdata(string n,char g){
			name=n;
			grade=g;
		}
	void display();	
	
};
int main(){
	student obj;
	obj.getdata("shivam",'A');
	obj.display();
	
	return 0;
}

void student::display(){
	cout<<"name of student--"<<name;
	cout<<"\nenter the grade--"<<grade;
}