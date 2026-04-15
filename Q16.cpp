#include<iostream>
using namespace std;
int main(){
	int checks;
	float fee, balance, charges=10;
	cout<<"Enter Balance: ";
	cin>>balance;
	cout<<"Enter checks: ";
	cin>>checks;
	if (balance<400){
		charges+=15;
	}
	if(checks<20){
		fee=checks*0.10;
	}
	else if(checks<40){
		fee=checks*0.08;
	}
	else if(checks<=59){
		fee=checks*0.06;
	}
	else{
		fee=checks*0.04;
	}
	charges+=fee;
	cout<<"The bank's service fees for the month: $"<<charges;
	return 0;
}
