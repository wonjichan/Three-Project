#include "Inventory.h"
#include "Item.h"
#include <iostream>
using namespace std;
int main()
{
	Inventory<Item> inv(5);
	inv.AddItem(Item("HP����", 100));
	inv.AddItem(Item("MP����",50));
	inv.AddItem(Item("�����̻� ����", 20));
	inv.AddItem(Item("blue����", 100));
	inv.AddItem(Item("red����", 50));
	inv.AddItem(Item("green ����", 20));

	inv.PrintAllItems();
	/*inv.SortItems();
	inv.PrintAllItems();*/

	return 0;
}
