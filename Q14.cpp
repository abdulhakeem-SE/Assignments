#include<iostream>
using namespace std;
int main(){
	int date, month, year;
	cout<<"Enter the Date, month and year in two digit"<<endl;
	cout<<"Date: ";
	cin>>date;
	cout<<"Month: ";
	cin>>month;
	cout<<"Year: ";
	cin>>year;
	if(date*month==year){
		cout<<"The date is magic"<<endl;
		cout<<date<<"/"<<month<<"/"<<year;
	}
	else{
		cout<<"The date is not magic"<<endl;
		cout<<date<<"/"<<month<<"/"<<year;
	}
	return 0;
}
