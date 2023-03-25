#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
void swap(int a, int b){ 
    int temp = a;           
    a = b;               
    b = temp;            
}
void swapPointer(int* a, int* b){ 
    int temp = *a;           
    *a = *b;             
    *b = temp;             
}

void swapReferenceVar(int &a, int &b){ 
    int temp = a;          
    a = b;               
    b = temp;             
    // return a;
}

int main(){
    int x =4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y); 
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}
