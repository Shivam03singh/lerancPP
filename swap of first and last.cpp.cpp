#include <iostream>
#include <math.h>
using namespace std;
void swap(int *a){
    int first,last,sum,n,final,b,c;
    n=(int)log10(*a);
    first=*a/pow(10,n);
    last=*a%10;
    b=first*(pow(10,n));
    c=*a%b;
    *a=c/10;
    final=last*(pow(10,n))+(*a*10+first);
    cout<<"the new digit after swap :-"<<final;
    
}

int main()
{
    int num;
    cout<<"srijan prabhakar  uid --22BCS13595"<<endl;
    cout<<"enter the no:--";
    cin>>num;
    swap(&num);
    return 0;
}
