#include<iostream>
using namespace std;

class coustmer
{
	private:
		
		int id;
		string name;
		int age;
		string city;
		string mobilenumber;
		string simcardvalidity;
		string telecomebrandname;
		
	public:
	
		void setdata()	
		{
			cout <<"Enter id\t:";
			cin >>id;
			cout <<"Enter name\t:";
			cin >>name;
			cout <<"Enter age\t:";
			cin >>age;
			cout <<"Enter city\t:";
			cin >>city;
			cout <<"Enter mobilenumber\t:";
			cin >>mobilenumber;
			cout <<"Enter simcardvalidity\t:";
			cin >>simcardvalidity;
			cout <<"Enter telecomebrandname\t:";
			cin >>telecomebrandname;
		}
		
		void getdata()
		{
			cout <<"id\t:"<<id<<endl
			<<"name\t:"<<name<<endl
			<<"age\t:"<<age<<endl
			<<"city\t:"<<city<<endl
			<<"mobilenumber\t:"<<mobilenumber<<endl
			<<"simcardvalidity\t:"<<simcardvalidity<<endl
			<<"telecomebrandname\t:"<<telecomebrandname<<endl;
		}
};

int main()
{
	coustmer c;
	for(int i=1;i<=5;i++)
	{
		c.setdata();
		c.getdata();
	}
}











