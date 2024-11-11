// lists2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
using namespace std;

int main()
{
	List list;
	list.push_back(10);
	list.push_back(12);
	list.push_back(13);
	list.push_front(9);
	list.push_front(91);
	list.push_front(92);
	list.show();
	list.clear();
}

