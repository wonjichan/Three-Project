#pragma once
#include "string"
using namespace std; 

class Item
{
private:
	string name;
	int price; 
public:
	Item(string name, int price) 
	{
		this->name = name; 
		this->price = price;
	}
	Item()
	{
		this->name = " "; 
		this->price = 0;
	}
	string getName() const 
	{
		return name; 
	}
	int getPrice() const
	{
		return price; 
	}
	void PrintInfo()
	{
		cout << "[이름: " << name << ", 가격: " << price << "G]" << endl;
	}

};