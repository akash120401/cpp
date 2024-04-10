#include<iostream>
using namespace std;
//sssssss
class car {
	private : int price=1100;
	
	         int id=120;
	         public:
	         int getpr(){
	         	return price;
	         	
			 }
	         int getId(){
	         	return id;
	         	
			 }
	         
	         void setPrice(int ak){
	         	price=ak;
	         	}
	
	
	
	
	
};

int main (){
	car obj;
	
	obj.setPrice(500);
	cout<<"....getnd...."<<obj.getpr()<<obj.getId()<<endl;
    //cout<<"....getnd...."<<obj.setPrice(500)<<endl; 

}
