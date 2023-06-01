#include<iostream>
using namespace std;
//static data member
class employ{
     static int count ; 
	int id ;
	public:
	void setdata(){
		cout<<"enter the id of employee";
		cin>>id;
		count++;
	}
	void display(){
		cout<<"the id of employee is"<< id<<"and this employee is "<<count;	
	}
	
};
int employ :: count;
int main()
{
	employ abhi;
	abhi.setdata();
	abhi.display();
	return 0;
}