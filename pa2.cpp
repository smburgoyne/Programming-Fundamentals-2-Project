#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int size;
	bool free;
	string progname;
	Node* next;
	int index;

	Node(int x, bool f, string p, Node* y);
	Node(int x, bool f, string p);
};

Node::Node(int x, bool f, string p, Node* y)
{
	size = x;
	free = f;
	progname = p;
	next = y;
	index = 0;
}

Node::Node(int x, bool f, string p)
{
	size = x;
	free = f;
	progname = p;
	next = NULL;
	index = 0;
}

class LinkedList {
public:
	Node* head;
	LinkedList();
	void insert(Node* place, int size, string progname);
	void remove(string p);
	bool member(string progname);
	int fragmentation();
	void print();
	Node* findbest(int progsize);
	Node* findworst(int progsize);
};

LinkedList::LinkedList()
{
	head = new Node(32, true, "free");
	Node* p = head;
	for (int i = 2; i <= 32; ++i)
	{
		p->next = new Node(0, true, "free");
		p = p->next;
	}
}

void LinkedList::insert(Node* place, int size, string progname)
{
	Node* p = place;
	int temp = p->size;
	p->size = size;
	for (int i = 1; i <= size; ++i)
	{
		p->progname = progname;
		p->free = false;
		p = p->next;
	}
	if (p->free == true)
	{
		p->size = temp - size;
	}
}

void LinkedList::remove(string p)
{
	Node* pl = NULL;
	Node* plEnd = NULL;
	int fsize;
	int fsize2;
	bool before = false;
	bool after = false;

	Node* a = head;
	while (a != NULL)
	{
		if (a->progname == p) {
			a->progname = "free1";
			a->free = true;
		}
		a = a->next;
	}
	Node* x = head;
	while (x != NULL)
	{
		if (x->progname == "free1" && x->size != 0) {
			pl = x;
		}
		if (x->progname == "free1" && x->size == 0)
		{
			plEnd = x;
		}
		x = x->next;
	}
	Node* c = head;
	int i = 1;
	if (head->free == true)
	{
		head->index = i;
		++i;
	}
	Node* y = c->next;
	while (c != NULL)
	{
		if (c->progname != y->progname && y->free == true)
		{
			y->index = i;
			++i;
		}
		c = c->next;
	}
	Node* d = head;
	Node* e = d->next;
	while (d != NULL)
	{
		if (d->free == true && e == pl)
		{
			before = true;
		}
		if (d == plEnd && e->free == true)
		{
			after = true;
			fsize2 = pl->size + e->size;
		}
		d = d->next;
	}
	Node* f = head;
	while (f != NULL)
	{
		if (before && !after)
		{
			if (f->index == (pl->index - 1))
			{
				f->size = f->size + pl->size;
				fsize = f->size + pl->size;
				pl->size = 0;
			}
		}
		if (after && !before)
		{
			if (f->index == (pl->index + 1))
			{
				pl->size = f->size + pl->size;
				f->size = 0;
			}
		}
		if (after && before && f->index == (pl->index - 1))
		{
			f->size = fsize + fsize2 - pl->size;
			pl->size = 0;
		}
		if (after && before && f->index == (pl->index + 1))
		{
			f->size = 0;
		}
		f = f->next;
	}
	Node* g = head;
	while (g != NULL)
	{
		if (g->free == true)
		{
			g->progname = "free";
			g->index = 0;
		}
		g = g->next;
	}
}
bool LinkedList::member(string progname)
{
	Node* p = head;
	bool isMember = false;
	while (p != NULL) {
		if (p->progname == progname)
		{
			isMember = true;
		}
		p = p->next;
	}
	return isMember;
}
int LinkedList::fragmentation()
{
	Node* x = head;
	int frag = 0;
	if (head->free == true)
	{
		++frag;
	}
	while (x != NULL)
	{
		Node* y = x->next;
		if (x->free == false && y->free == true)
		{
			++frag;
		}
		x = x->next;

	}
	return frag;
}
void LinkedList::print()
{
	Node* p = head;
	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 8; ++j)
		{
			cout << p->progname << " ";
			p = p->next;
		}
		cout << "\n";
	}
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
	Node* n = head;
	while (n != NULL) {
		if (n->free && n->size >= progsize) {
			if (worst == NULL || n->size > worst->size) {
				worst = n;
			}
		}
		n = n->next;
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
		LinkedList* ll = new LinkedList();
		while (!exit) {
			cout << "1. Add program\n" << "2. Kill program\n" << "3. Fragmentation\n" << "4. Print memory\n" << "5. Exit\n" << "choice - ";
			if (!(cin >> choice)) {
				cout << "Please enter a valid integer" << endl;
				continue;
			}

			if (choice == 1)
			{
				cout << "Program name - ";
				cin >> progname;
				cout << "Program size (KB) - ";
				cin >> progkb;
				if (ll->member(progname) == false) {
					if (progkb <= 128) {
						if (progkb % 4 == 0)
						{
							progsize = progkb / 4;
						}
						else
						{
							progsize = (progkb / 4) + 1;
						}
						Node* place = ll->findworst(progsize);
						if (place != NULL) {
							ll->insert(place, progsize, progname);
							cout << "Program " << progname << " added successfully: " << progsize << " page(s) used." << endl;
						}
						else {
							cout << "Error, not enough memory for Program " << progname << endl;
							continue;
						}
					}
					else {
						cout << "Error, not enough memory for Program " << progname << endl;
						continue;
					}
				}
				else
				{
					cout << "Error, Program " << progname << " already running." << endl;
					continue;
				}
			}
			if (choice == 2)
			{
				string pname;
				cout << "Program name: " << endl;
				cin >> pname;
				if (ll->member(pname))
				{
					ll->remove(pname);
					cout << "Program " << progname << " successfully killed." << endl;
				}
				else
				{
					cout << pname << " is not running" << endl;
					continue;
				}
			}
			if (choice == 3)
			{
				cout << "There are " << ll->fragmentation() << " fragment(s)." << endl;
			}
			if (choice == 4)
			{
				ll->print();
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
		return 0;
	}
	if (alg == "best")
	{
		bool exit = false;
		int choice;
		string progname;
		int progkb;
		int progsize;
		cout << "Using best fit algorithm\n";
		LinkedList* ll = new LinkedList();
		while (!exit) {
			cout << "1. Add program\n" << "2. Kill program\n" << "3. Fragmentation\n" << "4. Print memory\n" << "5. Exit\n" << "choice - ";
			if (!(cin >> choice)) {
				cout << "Please enter a valid integer" << endl;
				continue;
			}

			if (choice == 1)
			{
				cout << "Program name - ";
				cin >> progname;
				cout << "Program size (KB) - ";
				cin >> progkb;
				if (ll->member(progname) == false) {
					if (progkb <= 128) {
						if (progkb % 4 == 0)
						{
							progsize = progkb / 4;
						}
						else
						{
							progsize = (progkb / 4) + 1;
						}
						Node* place = ll->findbest(progsize);
						if (place != NULL) {
							ll->insert(place, progsize, progname);
							cout << "Program " << progname << " added successfully: " << progsize << " page(s) used." << endl;
						}
						else {
							cout << "Error, not enough memory for Program " << progname << endl;
							continue;
						}
					}
					else {
						cout << "Error, not enough memory for Program " << progname << endl;
						continue;
					}
				}
				else
				{
					cout << "Error, Program " << progname << " already running." << endl;
					continue;
				}
			}
			if (choice == 2)
			{
				string pname;
				cout << "Program name: " << endl;
				cin >> pname;
				if (ll->member(pname))
				{
					ll->remove(pname);
					cout << "Program " << progname << " successfully killed." << endl;
				}
				else
				{
					cout << pname << " is not running" << endl;
					continue;
				}
			}
			if (choice == 3)
			{
				cout << "There are " << ll->fragmentation() << " fragment(s)." << endl;
			}
			if (choice == 4)
			{
				ll->print();
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
		return 0;
	}
}