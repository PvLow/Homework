#include<iostream>
#include<string>

using namespace std;

class Auto{
private:
       string model;
	   string color;
	   float motorPower;
	   float price;
public:
	Auto(string model, string color, float motorPower, float price){
		this->model = model;
		this->color = color;
		this->motorPower = motorPower;
		this->price = price;
	}
	
	void setModel(string model){
		this->model = model;
	}
	
	void setColor(string color){
		this->color = color;
	}
	
	void setmotorPower(float motorPower){
		this->motorPower = motorPower;
	}
	
	void setPrice(float price){
		this->price = price;
	}
	
	
	void show(){
		cout << model<<"\t" << " : " << color << ", "<<"\t"<<motorPower<<", "<<"\t"<<price<<endl;
	}	

};


int main(){
	
	Auto car1("Renault","white",50.5,10000);
	car1.show();
	cout<<endl;
	
	Auto* cars = new Auto[4]{Auto("Peugeot","yellow",100, 25000),
	                        Auto("Lada","blue",150, 15000),
							Auto("BMW","black",300, 55000),
							Auto("Skoda","silver",80, 35000)};
	
	for (int i=0; i<4; i++){
		cars[i].show();		
	}
	cout<<endl;
	cars[1].setColor("green");
	cars[1].show();
	cars[3].setPrice(4500);
	cout<<endl;
	cars[3].show();
	
	delete[]cars;
	
}
