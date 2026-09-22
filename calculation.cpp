#include<iostream>
using namespace std;
class calculator{
	public:
	float num1;
	float num2;
	void setdata(){
		cout<<" enter the no 1 :"<<endl;
		cin>> num1;
		cout<<" enter the no 2 :"<<endl;
		cin>>num2;
	}
	float addition(){
	 return num1 + num2;
	}
	float subt(){
		return num1 - num2;
	}
		float mult(){
		return num1* num2;
	}
		float divi(){
		return num1/num2;
	}
	void display(){
		cout<<"======result======"<<endl;
		cout<<" addition : "<< num1 + num2<<endl;
		cout<<" subtraction : "<< num1 - num2<<endl;
			cout<<" multiplication : "<<num1* num2<<endl;
				cout<<" division : "<< num1/num2<<endl;
	
	}
	
};
int main(){
	calculator c;
	c.setdata();
	c.addition();
	c.subt();
	c.mult();
	c.divi();
	c.display();
}







