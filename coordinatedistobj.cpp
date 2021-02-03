#include<iostream>
#include<math.h>
using namespace std;

class point{
    friend double dist(point , point);
    int x, y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void displaypoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

double dist(point o1,point o2)
{
    int x1= o1.x;
    int y1= o1.y;
    int x2= o2.x;
    int y2= o2.y;
    double d=sqrt(((x2-1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return d;
}

int main(){
    point p(1, 2);
    p.displaypoint();

    point q(4, 6);
    q.displaypoint();
    double opd= dist(p,q);
    cout<<"the distance between the points is   "<<opd;
   
    return 0;
}
