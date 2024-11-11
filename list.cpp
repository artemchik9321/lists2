#include "List.h"
#include <iostream>
using namespace std;
List::List()
{
	head = tail = nullptr;
	size = 0;
}

void List::push_back(int v)
{

	if (head && tail != nullptr) 
	{
		Node* new_node = new Node(v, head);
		tail->next = new_node;
		tail = new_node;
	}
	else {
		Node* new_node = new Node(v);
		head = new_node;
		tail = new_node;
	}
	size++;
}

void List::push_front(int v)
{
	if (head != nullptr) 
	{
		Node* new_node = new Node(head, v);
		head->prev = new_node;
		head = new_node;
	}
	else {
		Node* new_node = new Node(v);
		head = new_node;
	}
	size++;
}

List::List(const List& obj)
{
	Node* current = this->head;
	Node* current2 = obj.head;
	this->size = obj.size;
	this->head = obj.head;
	this->tail = obj.tail;
	while (current != nullptr)
	{

	}
}

List::~List()
{
	Node* current = head;
	while (current != nullptr)
	{
		Node* next = current->next;
		delete current;
		current = next;
		cout << "DESTRUCTOR";
	}
	size = 0;
	head = tail = nullptr;
}

void List::show() const
{
	Node* current = head;
	while (current != nullptr)
	{
		cout << current->value << '\t';
		current = current->next;
	}
	cout << endl;
}

void List::clear()
{
	Node* current = head;
	while (current != nullptr)
	{
		Node* next = current->next;
		delete current;
		current = next;
	}
	size = 0;
	head = tail = nullptr;
	cout << "All Cleared";
}