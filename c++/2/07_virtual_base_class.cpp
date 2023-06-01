#include<iostream>
using namespace std;
/*
                             ----------------------class a --------------------------------------
                             | int x     //let x is integer which will inherit in class b and and class c
                        | class b  |                                                        | class c|
                             |      the int x will inherit t0 class d to from two classes       |
                             |here comes the virtual base class to solve this type of problem   |
                             |----------------- class d ------------------------ ---------------|

                             syntax 
                             class c :virtual a{

                             }
                              */
//example=
// student              1st class
// sports and test      2nd and 3rd class
// result               4th class (which will get two integer from two class)





class student {
    protected:
    int roll_no;

public:
void show(int a){
roll_no=a;
}
void print(){
    cout<<"the student roll no is "<<roll_no<<endl;
}
};





class sports:virtual public student  {
protected:
int score;
public:
void setscore(int c){
    score=c;
}
void dikha(){
    cout<<score;
}
};




class test :virtual public student {
    protected:
    int num ;
public:
void marks(int b){
num=b;
}
void show(){
    cout<<num<<endl;
}
};






class result:public test , public sports {
    private :
    int total;
public:
void display(){
    total = score+num;
}
void print(){
    cout<<"your performance is "<<total;
}
};
int main(){
result abhi;
abhi.setscore(23);
abhi.marks(99);
abhi.display();
abhi.print();
return 0;
}