#ifndef BASE_H
#define BASE_H

#include <string>
#include <vector>
using namespace std;

class Base
{
	private:
		string name;

	public:
		virtual display(int tabs) = 0;
};

class Management : public Base
{
	private:
		vector <Base*> subordinates;
		int num_sub;		//-1 = infinity

	public:
		void add (Base* b);
		
		void remove (int i);
};

class President : public Management
{
	public:
		void display (int tabs = 0);
};

class Manager: public Management
{
	public:
		void display (int tabs = 0);
};

class Employee: public Management
{
	public:
		void display (int tabs = 0);
};

class Intern: public Base
{
	private:
		vector <Base*> subordinates;

	public:
		void display (int tabs = 0);
}
		
