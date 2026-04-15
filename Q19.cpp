#include<iostream>
using namespace std;
int main(){
	int n;
	float gb, bill;
	cout<<"1. $39.99 per month"<<endl;
	cout<<"2.  $59.99 per month"<<endl;
	cout<<"3. $69.99 per month"<<endl;
	cout<<"Select the option: ";
	cin>>n;
	
	if(n==1){
		cout<<"Enter GB: ";
		cin>>gb;
		bill=39.99;
		if(gb>4)
		bill= bill+(gb-4)*10;
	}
	else if(n==2){
		cout<<"Enter GB: ";
		cin>>gb;
		bill=59.99;
		if(gb>4)
		bill= bill+(gb-8)*5;
	}
	else if(n==3){
		cout<<"Enter GB: ";
		cin>>gb;
		bill=69.99;
	}
	else
	cout<<"Invalid input";
	
	cout<<"--------Bill--------"<<endl;
	cout<<"PKG: "<<n<<endl;
	cout<<"GB Use: "<<gb<<endl;
	cout<<"Total Bill: $"<<bill<<endl;
	
	
	return 0;
}
