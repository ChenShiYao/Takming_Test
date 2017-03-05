#include<iostream>
using namespace std;
int main(){
	int num,ck=0,num1,num2;
	char ch;
	cout<<"ex1"<<endl;
	cout<<"請輸入數字";
	cin>>num;
	if(num%5==0&&num%6==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	cout<<endl<<"ex2";
	cout<<"請輸入字元";
	cin>>ch;
	while(ck==0){
			switch(((int)ch>=65&&ch<=90)?1:((int)ch>=97&&ch<=120)?2:3){
			case 1:
				cout<<"BIG";
				ck++;
				break;
			case 2:
				cout<<"SMALL";
				ck++;
				break;
			case 3:
				cout<<"error";	
				break;	
			}
		}
		cout<<endl<<"ex3";
		cout<<"請輸入數字";
		int num1,num2;
		cin>>num1;
		(char)num2=(char)num1/0;
		if(num2==0){
			cout<<"數字為0或者不符合英文";
		}
		else{
			(num1>0)?cout<<"正數":cout<<"負數"; 
		}
		
	double weight,count1,num3=0,eat;
	cout<<endl<<"ex4";
	cout<<"請輸入體重";
	cin>>weight;
	count1=weight*22;
	cout<<endl<<"請輸入活動量";
	cin>>num3;
	cout<<endl<<"請輸入今天吃的熱量";
	cin>>eat;
	switch((int)num3){
		case 1:
			count1/=0.6;
			break;
		case 2:
			count1/=0.65;
			break;
		case 3:
			count1/=0.75;
			break;
		default:
		
			break;
	}
	(eat>=count1)?cout<<"吃太多":cout<<"還行";
	
		
}
