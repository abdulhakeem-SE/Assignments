#include<iostream>
using namespace std;
int main(){
	int sec;
	cout<<"Enter the number of Second: ";
	cin>>sec;
	if(sec<=60&&sec<3600){
		float min;
		min=sec/60;
		cout<<sec<<"sec = "<<min<<"min";
	}
	else if(sec>=3600&&sec<86400){
		float hours;
		hours=sec/3600;
		cout<<sec<<"sec = "<<hours<<"hours";
	}
	else if(sec>=86400){
		float days;
		days=sec/86400;
		cout<<sec<<"sec = "<<days<<"days";
	}
	else
	cout<<"Invalid input";
	return 0;
	
}
