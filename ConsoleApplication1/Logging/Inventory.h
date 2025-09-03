#pragma once
#include <iostream>
#include "Item.h"
#include <algorithm>
using namespace std;

template <typename T>
class Inventory
{
private:
	T* pItem;
	int capacity;
	int size;
public:
	Inventory(int _capacity = 10)
	{
		if (_capacity < 0)
		{
			_capacity = 1;
		}
		capacity = _capacity; 
		pItem = new T[capacity];
		size = 0;
	}
	~Inventory()
	{
		delete[] pItem;
		pItem = nullptr;
	}
	Inventory(const Inventory<T>& other) 
	{
		pItem = new T[other.capacity];
		capacity = other.capacity; 
		size = other.size; 
		for (int i = 0; i < size; i++)
		{
			pItem[i] = other.pItem[i]; 
		}
	}
	void AddItem(const T& item)
	{
		if (size >= capacity)
		{
			Resize();
		}
		pItem[size] = item;
		size++;
	}
	void Resize()
	{
		capacity *= 2; 
		T* NewItem = new T[capacity]; 
		for (int i = 0; i < size; i++)
		{
			NewItem[i] = pItem[i]; 
		}
		delete[] pItem;
		pItem = nullptr; 
		pItem = NewItem; 
	}
	static bool compareItemsByPrice(const Item& a, const Item& b)
	{
		return a.getPrice() < b.getPrice();
	}
	void SortItems()
	{
		sort(pItem,pItem+size,compareItemsByPrice);
	}
	void RemoveLastItem()
	{
		if (size <= 0)
		{
			cout << "인벤토리가 비어있다" << endl;
		}
		else
		{
			size--;
		}
	}
	int GetSize() const
	{
		return size;
	}
	int GetCapacity() const
	{
		return capacity;
	}
	void PrintAllItems() const
	{
		if (size <= 0)
		{
			cout << "인벤토리가 비어있음" << endl;
		}
		for (int i = 0; i < size; i++)
		{
			Item* item = static_cast<Item*>(&pItem[i]); 
			item->PrintInfo();
		}
	}
};