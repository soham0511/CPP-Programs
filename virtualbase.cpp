#include<iostream>
using namespace std;

class student{
    protected: int roll;
    public:
    void setnum(int a)
    {
        roll=a;
    }
    void printnum(void)
    {
        cout<<"the roll no. is "<<roll<<endl;
    }
};


class test:virtual public student
{
    protected:
    float maths,physics;
    public:
    void setmark(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void printmarks()
    {
        cout<<"your result is "<<endl
            <<"msths marks"<<maths<<endl
            <<"physics marks"<<physics<<endl;
    }
};


class sports:public virtual student
{
    protected:
    float score;
    public :
    void setscore(float scr)
    {
        score=scr;
    }
    void printscore(void)
    {
        cout<<"your PT score"<<score<<endl;
    }
};



class result:public sports,public test
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        
        printnum();
        printmarks();
        printscore();
        cout<<"your result is "<<total<<endl;
    }
};
int main()
{
    result a;
    a.setnum(420);
    a.setmark(98.3,93.7);
    a.setscore(120);
    a.display();
    
    return 0;
}