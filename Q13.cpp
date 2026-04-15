#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Available models"<<endl;
	cout<<"1. Model 300"<<endl;
	cout<<"2. Model 200"<<endl;
	cout<<"3. Model 200"<<endl;
	cout<<"Chose number (1-3): ";
	cin>>n;
	if(n==1)
	cout<<"Model 300 Features: \nPicture-in-a-picture \nStereo sound \nRemote control";
	else if(n==2)
	cout<<"Model 300 Features: \nStereo sound \nRemote control";
	else if(n==3)
	cout<<"Model 300 Features: \nRemote control";
	else
	cout<<"Invalid input";
	return 0;
}
