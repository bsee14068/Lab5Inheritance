#include<iostream>
#include <stdio.h>
using namespace std;
class Band{
	protected:
		string band_name;
		string mem[10];
		int count;
	
	public: 
		Band(){};
		
		void set(string b_name,string me[],int a=10)
		{
			band_name=b_name;
			for(int i=0;i<a;i++)
			{
				mem[i]=me[i];
			}
			count=a;
		}
		void overall()
		{
			cout<<"Members Before changing: ";
			cout<<band_name;
			for(int i=0;i<10;i++)
			{
				cout<<mem[i];
			}
			
		}
		void add(string add,int index)
		{
			this->mem[index]=add;
		}
		void overall2()
		{
			cout<<"Members after changing: ";
			cout<<band_name;
			for(int i=0;i<10;i++)
			{
				cout<<mem[i];
			}
			
		}
};

class marching_band: public Band
{
	public:
		string marching_place,equip;
		int inp()
		{
			cout<<"Please Enter the name of marching Place: ";
			cin>>marching_place;
			for(int i=0;i<5;i++)
			{
				cout<<"please Enter the equipments of marching band: ";
			    cin>>equip;
			}
		}
		int overall2()
		{
			Band::overall2();
		}
	
};

class symphony_band: public Band
{
	public:
		string conductor_name,equip;
	int inp2()
	{
			cout<<"Please Enter the name of Conductor: ";
			cin>>conductor_name;
	}
	
};

class newclass{
	private:
		int somemember;
	public:
		newclass()
		{
			somemember = 10;
		}
		void anotherfunction()
		{
			//do someethig
		}
};

int main()
{
	int choice;
	string b_name,me[10];
	cout<<"Please Enter the Band name: ";
	cin>>b_name;
	for(int i=0;i<10;i++)
	{
			cout<<"Please Enter the name of "<< i+1 <<" band member: ";
			fflush(stdin);	
			cin>>me[i];
	}
	fflush(stdin);
	cout<<"Marching Band =1\nsymphony Band=2\n: ";
	cout<<"Enter you choice: ";
	fflush(stdin);
	cin>>choice;
	
	marching_band ob;
	cout<<ob.inp();
	cout<<"Marching Band =1\nsymphony Band=2\n: ";
	cout<<"Enter you choice 1 of 2: ";
	fflush(stdin);
	cin>>choice;
	if(choice=1)
	{
		ob.overall2();
	}
}
