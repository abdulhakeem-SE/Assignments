#include<iostream>
using namespace std;
int main(){
	int select;
	float Area;
	cout<<"1. Calculate the Area of a Circle \n2. Calculate the Area of a Rectangle \n3. Calculate the Area of a Triangle \nEnter your choice (1-3): ";
	cin>>select;
	if(select==1){
		float r, n=3.14159;
		cout<<"Enter the Radius: ";
		cin>>r;
		Area=r*r*n;
		cout<<"The Area of Circle is: "<<Area;
	}
	else if(select==2){
		float l, w;
		cout<<"Enter the Length and Width."<<endl;
		cout<<"Length: ";
		cin>>l;
		cout<<"Width: ";
		cin>>w;
		Area=l*w;
		cout<<"The area of Rectangle is: "<<Area;
	}	
	else if(select==3){
		float h, b, c=0.5;
		cout<<"Enter the Height and base."<<endl;
		cout<<"Height: ";
		cin>>h;
		cout<<"Base: ";
		cin>>b;
		Area=h*b*c;
		cout<<"The area of triangle is: "<<Area;
   	}
	else
		cout<<"Invalid input";
		return 0;
}
