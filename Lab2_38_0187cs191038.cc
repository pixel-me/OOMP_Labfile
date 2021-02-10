#include<iostream>

using namespace std;

class book

{

	int book_numbre;

	char title[15];

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

		gets(title);

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

}book obj_global;   /*Declaring global object*/

 

int main()

{

	book obj_local;   /*Declaring local object */

	obj_local.getdata();

	obj_local.purchase();

/* doing the same work by using global object */

	obj_global.getdata();

	obj_global.purchase();

	return 0;
}