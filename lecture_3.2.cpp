#include<iostream>
#include<string.h>

using namespace std;

class cafe{

	private :
		int id;
		char name[100];
		int type [100];
		int re;
		char lo[100];
	    int year;
		int staff;
		int n;

		public :

	cafe(int x){
		int n;
		this-> n = x;
		int i,a;

	cout << "Enter count of cafe :"<<endl;
	cin>>a;

	for(i=0;i<n;i++){
	    int id;
		char name[100];
		char type [100];
		int re;
		char lo[100];
		int year;
		int staff;

		cout << "Enter id of cafe :- ";
		cin >> id;
		cout << "Enter name of cafe :- ";
		cin >> name;
		cout << "Enter type of cafe  :- ";
		cin >> type;
		cout << "Enter caferating  :- ";
		cin >> re;
		cout << "Enter cafe location :- ";
		cin >> lo;
		cout << "Enter cafe establish year :- ";
		cin >> year;
		cout << "Enter cafe staff count :- ";
		cin >> staff;
}
}
};

int main(){
	int n;
	cout << "Enter number of cafe :"<<endl;
	cin >> n;
	cafe c(n);

}


