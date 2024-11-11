#pragma once

class List
{
	class Node 
	{

	public:
		int value;
		Node* prev;
		Node* next;
		Node() 
		{
			this->value = 0;
			prev = next = nullptr;
		}
		Node(int value) {
			this->value = value;
			prev = next = nullptr;
		}
		Node(int value, Node* prev) 
		{
			this->value = value;
			this->prev = prev;
			next = nullptr;
		}
		Node(Node* next, int value) 
		{
			this->value = value;
			this->next = next;
			prev = nullptr;
		}

	};
private:
	Node* head;
	Node* tail;
	size_t size;
public:
	List();
	void push_back(int v);
	void push_front(int v);
	List(const List& obj);
	~List();
	void show() const;
	void clear();
};
