#include<iostream>
using namespace std;
int main(){
	float mass, weight;
	cout<<"Enter the mass of an object: ";
	cin>>mass;
	weight=mass*9.8;
	if(weight>=1000){
		cout<<"The object is too heavy: "<<weight;
	}
	else if(weight<=10){
		cout<<"the object is too light: "<<weight;
	}
	else
	cout<<"Weight: "<<weight;
	return 0;
}
