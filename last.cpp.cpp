#include <iostream>
#define maxsize 5
using namespace std;
class Guest {
    public:
    string name;
    int seatno;
}; 
class Hall {
    public:
    static int front, rear;
    static Guest allGuest[maxsize];
    static int alloteSeat() {
        if (rear == (maxsize - 1)) {
            cout<< "Hall is full!";
            return 0;
            }
        rear++;
        cout<< "Enter Guest Name: ";
        cin>>allGuest[rear].name;
        allGuest[rear].seatno = rear + 1;
        return 1;
    }
    static void listGuest() {
        while(++front <= rear) {
            cout<< "\nGuest " <<allGuest[front].name << " is seated on seat S" <<allGuest[front].seatno<< ".";
            }
        rear = front = -1;
    }
};
int Hall::front =-1;
int Hall::rear =-1;
Guest Hall::allGuest[maxsize] = {};
int main(){
   string ch;
   Hall::alloteSeat();
   Hall::alloteSeat();
   
   cout<<"dou you want toenter more y/n";
   cin>>ch;
   if (ch =="y"){
       Hall::alloteSeat();
   }
   Hall::listGuest();
   return 0;
}
    


