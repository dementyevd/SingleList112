#include "SingleList.h"

void main() {
	sl_list list1;
	list1.push_back(5);
	list1.push_back(25);
	list1.push_back(8);
	list1.push_back(9);
	list1.push_back(8);
	list1.push_back(9);
	list1.push_back(5);
	list1.print();
	list1.remove(5);
	list1.print();
	cout << list1.back();
	//cout << "back: " << list1.back() << " front: " << list1.front() << " size = " << list1.size_() << endl;
	//list1.clear();
	//list1.empty() ? cout << "Yes" : cout << "No" << endl;
}