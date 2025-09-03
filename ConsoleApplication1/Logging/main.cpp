#include "Inventory.h"
#include "Item.h"
#include <iostream>
using namespace std;
int main()
{
	Inventory<Item> inv(5);
	inv.AddItem(Item("HP포션", 100));
	inv.AddItem(Item("MP포션",50));
	inv.AddItem(Item("상태이상 포션", 20));
	inv.AddItem(Item("blue포션", 100));
	inv.AddItem(Item("red포션", 50));
	inv.AddItem(Item("green 포션", 20));

	inv.PrintAllItems();
	/*inv.SortItems();
	inv.PrintAllItems();*/

	return 0;
}
