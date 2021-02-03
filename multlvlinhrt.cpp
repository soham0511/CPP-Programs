#include<iostream>
using namespace std;

class student
{
    protected: int roll;
    public: void setnum(int);
    void getnum(void);

};
void student::setnum(int r)
{
    roll=r;

}
void student::getnum()
{
    cout<<"the roll number is "<<roll<<endl;
}


class exam:public student{
    protected: float maths,physics;
    public: void setmark(float,float);
    void getmark(void);
};
void exam::setmark(float m1, float m2)
{
    maths=m1;
    physics=m2;
}
void exam::getmark(void)
{
    cout<<"the marks physics are "<<physics<<endl;
    cout<<"the marks maths are "<<maths<<endl;
}


class result:public exam{
    
    public:
    void display(){
        getnum();
        getmark();
        cout<<"the percentage is "<<((maths+physics)/2)<<endl;

    }
};


int main()
{
    result a;
    a.setnum(420);
    a.setmark(96.6,90.5);    
    a.display();
    return 0;
}