#include<iostream>

using namespace std;

class book

{

	int book_numbre;

	string title;

	float price;

	void total_price(int n)

	{

		float total_cost;

		total_cost=price*n;

		cout<<total_cost;

	}

public:

	void getdata()

	{

		cout<<"Enter Book Number ";

		cin>>book_numbre;

		cout<<"Enter Book Title ";

		// gets(title);
		cin.ignore();
		getline(cin, title);

		cout<<"Enter price per book ";

		cin>>price;

	}

 

	void purchase()

	{

		int n;

		cout<<"Enter number of books to purchase ";

		cin>>n;

		cout<<"Total cost is ";

		total_price(n);

	}

};   

 

int main()

{

	book obj_local;   

	obj_local.getdata();

	obj_local.purchase();

	return 0;
}