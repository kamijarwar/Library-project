#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Book{
	public:
		string name;
		string auther;
		int price;
		
		
		Book(string name, string auther, int price){
			this->name=name;
			this->auther=auther;
			this->price=price;
		}
		void display(){
			cout<<"------------------Book--------------------------"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Auther: "<<auther<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<endl;
		}
		
};
class Libray{
	public:
		vector<Book>books;
		void addbook(){
			string name,auther;
			int price;
			cout<<"Enter Book Name: ";
			cin>>name;
			
			cout<<"Auther Name: ";
			cin>>auther;
			
			cout<<"Price of Book: ";
			cin>>price;
			
			Book b(name,auther,price);
			books.push_back(b);
			
			cout<<"Book Added successfully: "<<endl;
		}
		void showbooks(){
			if(books.empty()){
				cout<<"No BOOKS avilable :"<<endl;
				return ;
			}
			for(int i=0; i<books.size();i++){
				books[i].display();
			}
		}
		
};


int main(){
	Libray lib;
	int choice;
	do{
		cout<<"***------------------------Libray Menu***-------------------------------"<<endl;
		cout<<"1. Add Book\n";
		cout<<"2. Show Book\n";
		cout<<"3. Exit\n";
		cout<<"Enter choice: ";
		cin>>choice;
		switch (choice){
			case 1: lib.addbook();
			case 2: lib.showbooks();
			break;
			case 3: cout<<"Exiting....\n";
			break;
			default:
				cout<<"Invalid choice:!\n";
		}
		
	}while(choice=!3);
	return 0;
}
