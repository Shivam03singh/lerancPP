# include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
    };
    void student ::set_roll_number(int r){
        roll_number=r;
    }
    void student ::get_roll_number(){
        cout<<"the roll no. is "<<roll_number<<endl;
    }
    class exam : public student{
        protected:
        float maths;
        float physics;
        public:
        void set_marks(float,float);
        void get_marks(void);
    };
    void exam ::set_marks(float m1,float m2){
        maths=m1;
        physics=m2;

    }
    void exam::get_marks(){
        cout<<"the marks obtained in maths are:-"<<maths<<endl;        
        cout<<"the marks obtained in physics are:-"<<physics<<endl;        
    }
    class result: public exam{
        float percentage;
        public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"your result"<<(maths+physics)/2<<"%"<<endl;
        }

    };
    int main(){
        result shivam;
        shivam.set_roll_number(420);
        shivam.set_marks(96.0,98.2);
        shivam.display_result();
        return 0;
    }