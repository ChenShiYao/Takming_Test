#include<iostream>
using namespace std;
int main(){
	int num,ck=0,num1,num2;
	char ch;
	cout<<"ex1"<<endl;
	cout<<"�п�J�Ʀr";
	cin>>num;
	if(num%5==0&&num%6==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	cout<<endl<<"ex2";
	cout<<"�п�J�r��";
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
		cout<<"�п�J�Ʀr";
		int num1,num2;
		cin>>num1;
		(char)num2=(char)num1/0;
		if(num2==0){
			cout<<"�Ʀr��0�Ϊ̤��ŦX�^��";
		}
		else{
			(num1>0)?cout<<"����":cout<<"�t��"; 
		}
		
	double weight,count1,num3=0,eat;
	cout<<endl<<"ex4";
	cout<<"�п�J�魫";
	cin>>weight;
	count1=weight*22;
	cout<<endl<<"�п�J���ʶq";
	cin>>num3;
	cout<<endl<<"�п�J���ѦY�����q";
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
	(eat>=count1)?cout<<"�Y�Ӧh":cout<<"�٦�";
	
		
}
