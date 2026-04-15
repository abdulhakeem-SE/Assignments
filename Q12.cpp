#include<iostream>
using namespace std;
int main(){
	int income, year;
	cout<<"Enter the yearly income and job stability: "<<endl;
	cout<<"Income: ";
	cin>>income;
	cout<<"Year: ";
	cin>>year;
	if(income>=35000&&year>5){
		cout<<"You qualify for the special loan.";
	}
	else
	cout<<"You do not qualify for the special loan.";
	return 0;
}
