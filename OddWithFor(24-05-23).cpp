#include<iostream>
using namespace std;
int main(){
	int firstNum,secondNum,sum=0,square;
	cout<<"Enter first number (number must be less than second number) = ";
	cin>>firstNum;
	cout<<"Enter Second Num = ";
	cin>>secondNum;
	
	for(int i=0; i<=secondNum; i++){
		if(firstNum%2!=0){
			cout<<firstNum<<endl;
		}
		firstNum++;
	}
}
