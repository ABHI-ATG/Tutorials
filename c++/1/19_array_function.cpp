#include<iostream>
using namespace std;
class shop{
	private:
	int item[100];
	int price[100];
	int counter;
	public:
	void valuecounter(void){
		counter=0;
	}
	void getprice(void);
	void display(void);
};
int main()
{
	shop dukaan;
	dukaan.getprice();
	dukaan.display();
	return 0;
}
void shop :: getprice(void){
	cout<<"enter the code of item";
	cin>>item[counter];
	cout<<"enter the price";
	cin>>price[counter];
	counter++;
}
void shop :: display(void){
	for(int i=0;i<counter;i++){
		cout<<"the code of item is "<<item[i]<<endl<<"the price of item is "<<price[i]<<endl;
	}
}