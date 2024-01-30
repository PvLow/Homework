#include<iostream>

using namespace std;

class Fraction{
private:
	int num;
	int denom;
public:
	Fraction(int num, int denom){
		this->num = num;
		this->denom = denom;
	}
	
	void show(){
		cout<<"Fraction: "<<num<<"/"<<denom<<endl;
		
	}
	
	void addition(Fraction &D1, Fraction &D2){
		num = D1.num*D2.denom+D1.denom*D2.num;
		denom = D1.denom*D2.denom;		
	}
	
	void subtration(Fraction &D1, Fraction &D2){
		num = D1.num*D2.denom-D1.denom*D2.num;
		denom = D1.denom*D2.denom;
	}
	
	void multiplication(Fraction &D1, Fraction &D2){
		num = D1.num*D2.num;
		denom = D1.denom*D2.denom;
	}
	
	void division(Fraction &D1, Fraction &D2){
		num = D1.num*D2.denom;
		denom = D1.denom*D2.num;
	}
	
};
int main(){
	Fraction F1(3,5);
	F1.show();
	Fraction F2(2,7);
	F2.show();
	Fraction F3(1,1);
	cout<<endl;
	cout<<"Addition fraction 1 and fraction 2: "<<endl;
	F3.addition(F1,F2);
	F3.show();
	cout<<endl;
	cout<<"Subtration fraction 1 and fraction 2: "<<endl;
	F3.subtration(F1,F2);
	F3.show();
	cout<<endl;
	cout<<"Multiplication fraction 1 and fraction 2: "<<endl;
	F3.multiplication(F1,F2);
	F3.show();
	cout<<endl;
	cout<<"Division fraction 1 and fraction 2: "<<endl;
	F3.division(F1,F2);
	F3.show();
	
}
