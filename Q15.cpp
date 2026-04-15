#include<iostream>
using namespace std;
int main(){
	int sales, rate;
	cout<<"Enter the Sales amount: ";
	cin>>sales;
	if(sales<=10000){
	rate=sales*0.10;
	cout<<"Commission: "<<rate;
	}
	else if(sales<=15000){
		rate=sales*0.20;
		cout<<"Commission: "<<rate;
	}
	else if(sales>15000){
		rate=sales*0.20;
		cout<<"Commission: "<<rate;
	}
	else
	cout<<"Invalid input"<<endl;
	return 0;
}
