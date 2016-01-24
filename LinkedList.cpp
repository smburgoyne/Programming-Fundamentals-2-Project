// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int size;
	bool free;
	string progname;
	Node* next;
	
	Node(int x, bool f, string p, Node* y); 
	Node(int x, bool f, string p);
	void insert(int s, string progname);
	void remove(string p);
};

Node::Node(int x, bool f, string p, Node* y)
{
	size = x;
	free = f;
	progname = p;
	next = y;
}

Node::Node(int x, bool f, string p)
{
	size = x;
	free = f;
	progname = p;
	next = NULL;
}

 void Node::insert(int s, string progname) 
 {
	 if (next == NULL)
	 {
		 next = new Node(s, false, progname);
		 size = size - s;
		 return;
	 }
	 else
	 {
		 Node* temp = new Node(s, false, progname);
		 temp->next = next;
		 next = temp;
		 size = size - next->size;
	 }
	 next->insert(s, progname);
 }

 void Node::remove(string p)
 {
	 if (next->progname == p)
	 {
		 Node * temp = next;
		 next = next->next;
		 delete temp;
		 return;
	 }
	 next->remove(p);
 }

class LinkedList {
public:
	Node* head;
	LinkedList();
	void insert(Node* place, int size, string progname);
	void remove(string p);
	void print();
	bool member(string prog);
	Node* findbest(int progsize);
	Node* findworst(int progsize);
};

LinkedList::LinkedList()
{
	head = new Node(32, true, "free");
}

void LinkedList::insert(Node* place, int size, string progname)
{
	place->insert(size, progname);
}

void LinkedList::remove(string p)
{
	if (head->progname == p)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}
	head->remove(p);
}

void LinkedList::print()
{
	Node* p;
	p = head;
	while (p != NULL) 
	{
		for (int page = 1; page <= p->size; ++page)
		cout << p->progname << "\n";
		p = p->next;
	}
}

bool LinkedList::member(string prog)
{
	bool member = false;
	Node * p;
	p = head;
	while (p != NULL)
	{
		if (p->progname == prog)
		{
			member = true;
		}
		p = p->next;
	}
	return member;
}

Node* LinkedList::findbest(int progsize) {
	Node* best = NULL;
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->free && n->size >= progsize) {
			if (best == NULL || n->size < best->size) {
				best = n;
			}
		}
	}
	return best;
}
Node* LinkedList::findworst(int progsize) {
	Node* worst = NULL;
	for (Node* n = head; n != NULL; n = n->next) {
		if (n->free && n->size >= progsize) {
			if (worst == NULL || n->size > worst->size) {
				worst = n;
			}
		}
	}
	return worst;
}

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "ERROR: Wrong number of args\n";
		return -1;
	}

	string alg(argv[1]);
	if (!(alg == "worst" || alg == "best")) {
		cout << "ERROR: Invalid algorithm\n";
		return -1;
	}
	if (alg == "worst")
	{
		bool exit = false;
		int choice;
		string progname;
		int progkb;
		int progsize;
		cout << "Using worst fit algorithm\n";
		while (!exit) {
			LinkedList* ll = new LinkedList();
			cout << "1. Add program\n" << "2. Kill program\n" << "3. Fragmentation" << "4. Print memory" << "5. Exit" << endl;
			if (cin >> choice) {
				break;
			}
			else {
				cout << "Please enter a valid integer" << endl;
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (choice == 1)
			{
				cout << "Program name: ";
				cin >> progname;
				cout << "Program size (KB) : ";
				cin >> progkb;
				if (progkb <= 128) {
					progsize = ceil(progkb / 4);
					Node* place = ll->findworst(progsize);
					if (place != NULL) {
						ll->insert(place, progsize, progname);
						cout << "Program " << progname << " added successfully: " << progsize << " page(s) used." << endl;
					}
					else {
						cout << "Program is too large." << endl;
					}
				}
				else {
					cout << "Program is too large." << endl;
				}
			}
			if (choice == 2)
			{

			}
			if (choice == 3)
			{

			}
			if (choice == 4)
			{

			}
			if (choice == 5)
			{
				exit = true;
				break;
			}
			else
			{
				cout << "Please enter an integer from 1-5" << endl;
				continue;
			}
		}

	}
	if (alg == "best")
	{

	}
	for (int i = 0; i < argc; i++) {
		cout << "argv[" << i << "] is " << argv[i] << endl;
	}
	return 0;
}
