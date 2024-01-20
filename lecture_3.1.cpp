#include<iostream>
using namespace std;

class Companies{
	private :
		int id;
		char name[30];
 		int staff_quantity;
 	 	int revenue ;
		int import_diamonds ;
		int export_diamonds;
		char ceo[30];
	public :
		Companies(int n1,char n2,int n3,int n4,int n5,int n6,char n7){

		this-> id = n1;
		this-> name[30] = n2;
		this-> staff_quantity = n3;
		this-> revenue = n4;
		this-> import_diamonds = n5;
		this-> export_diamonds = n6;
		this-> ceo[30] = n7;
		cout<<"id is :"<<this->id<<endl;
		cout<<"name is :"<<this->name<<endl;
		cout<<"staff quantity is :"<<this->staff_quantity<<endl;
		cout<<"revenue is :"<<this->revenue<<endl;
		cout<<"import diamonds is :"<<this->import_diamonds<<endl;
		cout<<"export diamonds is :"<<this->export_diamonds<<endl;
		cout<<"ceo is :"<<this->ceo<<endl;
		
		
	}
		
	};
	int main(){
		
		int id;
		char name[30];
 		int staff_quantity;
 	 	int revenue ;
		int import_diamonds ;
		int export_diamonds;
		char ceo[30];
		int n;
		int i;
		cout<<"enter your number";

		for(i=1;i<=n;i++){

			cout<<"enter your id:-";
			cin>>id;
			cout<<"enter your name:-";
			cin>>name;
			cout<<"enter your staff qountity:-";
			cin>>staff_quantity;
			cout<<"enter your revenue:-";
			cin>>revenue;
			cout<<"enter your import diamonds:-";
			cin>>import_diamonds;
			cout<<"enter your export diamonds:-";
			cin>>export_diamonds;
			cout<<"enter your ceo:-";
			cin>>ceo;
		}

			Companies c(int n1,char n2,int n3,int n4,int n5,int n6,char n7);



	return 0;



}
		

