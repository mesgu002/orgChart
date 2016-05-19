#include "base.h"

using namespace std;

void Management::add (Base* b)
{
	if (subordinates.size() < num_sub || num_subs < 0)
	{
		subordinates.push_back(b);
	}
}

void Management::remove (int i)
{
	if (int i < num_sub || num_subs < 0)
	{
		subordinates.at(i) = NULL;
	}
}

void President::display (int tabs = 0)
{
	for (unsigned i = 0; 0 < tabs; i++)
	{
		cout << "\t";
	}

	cout << this->name << " - President" << endl;
	for (unsigned i = 0; i < subordinates.size(); i++)
	{
		if (subordinates.at(i) != NULL)
		{
			subordinates.at(i)->display(tabs + 1);
		}
	}
}

void Manager::display (int tabs = 0)
{
	for (unsigned i = 0; i < tabs; i++)
	{
		cout << "\t";
	}
	cout << this->name << " - Manager" << endl;
	for (unsigned i = 0; i < subordinates.size(); i++)
	{
		if (subordinates.at(i) != NULL)
		{
			subordinates.at(i)->display(tabs + 1);
		}
	}
}

