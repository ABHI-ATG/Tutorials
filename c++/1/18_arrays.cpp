#include<iostream>
using namespace std;

class employee{
	int id ;
	int salary;
	public:
	void setid(void){
		cout<<"enter id of employee"<<id;
		cin>>id;
	}
	void getid(void){
		cout<<"the id of employee is"<<id<<endl;
	}
};

int main()
{
//	employee abhi,atg,love;
	//abhi.setid();
//	abhi.getid();
	employee fb[4];
	for(int i=0;i<4;i++){
		fb[i].setid();
		fb[i].getid();
	}
	return 0;
}