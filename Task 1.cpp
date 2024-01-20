#include <iostream>
using namespace std;


void average(int a, int b,int c, int d);
void sum(int a, int b,int c, int d);


int main(){
	int a,b,c,d;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Enter 3rd Number: ";
	cin>>c;
	cout<<"Enter 4th Number: ";
	cin>>d;
	average(a,b,c,d);
	cout<<endl;
	sum(a,b,c,d);
	return 0;
}

void average(int a, int b,int c, int d)
{
	int average;
	average=(a+b+c+d)/4;
	cout<<"The Average is : "<<average;
}

void sum(int a, int b,int c, int d){
	int sum;
	sum=(a+b+c+d);
	cout<<"The Sum is : "<<sum;
}



