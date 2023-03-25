#include <iostream>
using namespace std;
int fibo(int n){
    int i;
    int a=0,b=1,c;
    cout<<a;
    cout<<b;
    for(i=1;i<n;i++){
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
}



int main()
{
   int n; 
   cout<<"name- shivam singh uid-22BCS14777"<<endl;
   cout<<"enter the no till where you want to dispaly";
   cin>>n;
   fibo(n);

    return 0;
}