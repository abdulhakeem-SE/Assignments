#include<iostream>
using namespace std;
int main(){
	float a, b;
	double c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	if(b>0){
		c=a/b;
		cout<<"The Ans is: "<<c;
	}
	else
	cout<<"Division by zero is not possible.";
	return 0;
}
