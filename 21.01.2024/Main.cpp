#include<iostream>

using namespace std;

class Currency{
public:
	float price;
	int quantity;
	float sum;
public:
	Currency(float price, int quantity, float sum){
		this->price = price;
		this->quantity = quantity;
		this->sum = sum;
		//sum = price*quantity;
	}
	
	void converter(Currency &C1, Currency &C2){
		quantity = C1.sum/C2.price;
	}
	
	void show(){
		cout<<"Rate of exchange: "<<price<<" Quantity: "<<quantity<< " Sum: "<<price*quantity<<endl;
	}	
};

int main(){
	cout<< "One Euro in rubels: "<<endl;
	Currency C1(97.09,1,0);
	C1.show();
	cout<< "One Dollar in rubels: "<<endl;
	Currency C2(89.52,1,0);
	C2.show();
	cout<<endl;
	cout<< "Rubles in dollar: "<<endl;
	Currency C5(1,1,5000);
	Currency C6(89.52,1,0);
	C2.converter(C5,C2);
	C2.show();	
	cout<<endl;
	cout<< "Euro in rubels: "<<endl;
	Currency C3(97.09,72,0);
	C3.show();	
	cout<<endl;
	cout<< "Dollars in rubels: "<<endl;
	Currency C4(89.52,35,0);
	C4.show();
		
	
}
