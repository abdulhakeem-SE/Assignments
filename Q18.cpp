#include<iostream>
using namespace std;
int main(){
	int n, bill, months;
	cout<<"1. Standard Adult Membership\n2. Child Membership\n3. Senior Citizen Membership\n4. Quit the Program"<<endl;
	cout<<"Select the Option 1-4: ";
	cin>>n;
	if(n==1){
		cout<<"Enter the months: ";
	    cin>>months;
		bill=months*40;
		cout<<"----------Bill------------"<<endl;
		cout<<"Standard Adult Membership"<<endl;
		cout<<"Months: "<<months<<endl;
		cout<<"Total Bill: "<<bill<<endl;
	}
	else if(n==2){
		cout<<"Enter the months: ";
	    cin>>months;
		bill=months*20;
		cout<<"------Bill------"<<endl;
		cout<<"Child Membership"<<endl;
		cout<<"Months: "<<months<<endl;
		cout<<"Total Bill: "<<bill;
	}
	else if(n==3){
		cout<<"Enter the months: ";
	    cin>>months;
		bill=months*30;
		cout<<"----------Bill-----------"<<endl;
		cout<<"Senior Citizen Membership"<<endl;
		cout<<"Months: "<<months<<endl;
		cout<<"Total Bill: "<<bill;
	}
	else if(n==4){
	}
	else
	cout<<"Invalid Input";
	return 0;
}
