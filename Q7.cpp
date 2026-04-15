#include<iostream>
using namespace std;
int main(){
	int t1,t2,t3;
	cout<<"Enter the Time of three Runers: "<<endl;
	cout<<"Runner 1: ";
	cin>>t1;
	cout<<"Runner 2: ";
	cin>>t2;
	cout<<"Runner 3: ";	
	cin>>t3;
	if(t1<t2&&t1<t3){
		cout<<"Runner 1 is First."<<endl;
		if(t2<t3){
			cout<<"Runner 2 is Second."<<endl;
			cout<<"Runner 3 is Third."<<endl;
        }
        else{
        	cout<<"Runner 3 is Second."<<endl;
        	cout<<"Runner 2 is Third."<<endl;
		}
	}
	else if(t2<t1&&t2<t3){
		cout<<"Runner 2 is First."<<endl;
		if(t1<t3){
			cout<<"Runner 1 is Second."<<endl;
			cout<<"Runner 3 is Third."<<endl;
        }
        else{
        	cout<<"Runner 3 is Second."<<endl;
        	cout<<"Runner 1 is Third."<<endl;
		}
	}
	else{
		cout<<"Runner 3 is First"<<endl;
		if(t1<t2){
			cout<<"Runner 1 is Second."<<endl;
			cout<<"Runner 2 is Third."<<endl;
        }
        else{
        	cout<<"Runner 2 is Second."<<endl;
        	cout<<"Runner 1 is Third."<<endl;
		}
	}
	return 0;
}
