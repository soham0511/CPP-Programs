#include<iostream>
#include<cstring>
using namespace std;


class cwh
{
    protected:
    char title[40];
    float rating;
    public:
    cwh(char *s,float r )
    {
        strcpy(title,s);
        rating=r;
    }
     void virtual display()=0;
   
};


class cwhvideo:public cwh{
    float videolen;
    public:
    cwhvideo(char *s,float r,float vl):cwh(s,r)
    {
        videolen=vl;

    }
    void display()
    {
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"ratings: "<<rating<<" out of 5 "<<endl;
        cout<<"length of this video: "<<videolen<<"minutes"<<endl;
    }
};


class cwhtext:public cwh{
    int words;
    public:
    cwhtext(char *s,float r,int wc):cwh(s,r)
    {
        words=wc;

    }
    void display()
    {
        cout<<"this is an amazing blog with title "<<title<<endl;
        cout<<"ratings: "<<rating<<" out of 5 "<<endl;
        cout<<"number of word "<<words<<" words"<<endl;
    }
};


int main()
{
    char* title=new char[30];
    float rating,vlen;
    int words;
    strcpy(title,"c++ tutorial");
    vlen=4.56;
    rating=4.89;
    cwhvideo cvd(title,rating,vlen);
   // cvd.display();

strcpy(title,"c++ tutorial text");
    rating=4.89;
    words=432;
    cwhtext cvt(title,rating,words);
   // cvt.display();

    cwh* tuts[2];
    tuts[0]=&cvd;
    tuts[1]=&cvt;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}