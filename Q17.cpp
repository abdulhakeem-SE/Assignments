#include<iostream>
using namespace std;
int main(){
	int n;
 	cout<<"Number  Headphone Type"<<endl;
	cout<<"1       Noise Canceling"<<endl;
	cout<<"2       Wirelesa"<<endl;
	cout<<"3       Wired Budget"<<endl;
	cout<<"Select the number 1-3: ";
	cin>>n;
	if(n==1){
		cout<<"Opt: "<<n<<endl;;
		cout<<"Model: Noise Canceling"<<endl;;
		cout<<"Price: $249.00";
	}
	else if(n==2){
		cout<<"Opt: "<<n<<endl;
		cout<<"Model: Wireless"<<endl;;
		cout<<"Price: $199.00";
	}
	else if(n==3){
		cout<<"Opt: "<<n<<endl;;
		cout<<"Model: Wired Budget"<<endl;;
		cout<<"Price: $49.00";
	}
	else
	cout<<"Invalid input";
	return 0;
	
}
