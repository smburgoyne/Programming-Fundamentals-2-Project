#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Node {
public:
	string token;
	Node* next;
};

class LinkedList {
public:
	Node* head;
	LinkedList();
	void insert(string t);
	void remove();
	void remove(string t);
	void removeOne(string t);
	void print();
	void commaprint();
	bool exists(string t);
	bool isHead(string t);
};
LinkedList::LinkedList()
{
	head = NULL;
}
void LinkedList::insert(string t)
{
	Node* n = new Node();   
	n->token = t;            
	n->next = head;     
						
	head = n;
}
void LinkedList::remove()
{
	Node* n = head;

	head = head->next;
	delete n;
}
void LinkedList::remove(string recipename) {

	if (head->token == recipename)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	else
	{
		Node * current = head;
		while (current->next != NULL)
		{
			if (current->next->token == recipename)
			{
				if (current->next->next == NULL)
				{
					Node* temp = current->next;
					current->next = NULL;
					delete temp;
				}
				else
				{
					Node* temp = current->next;
					current->next = current->next->next;
					delete temp;
				}
			}
			current = current->next;
		}
	}

}

void LinkedList::removeOne(string t)
{
	Node * n = head;
	while (n != NULL)
	{
		if (n->next->token == t)
		{
			Node* temp = n->next;
			n->next = n->next->next;
			delete temp;
			return;
		}
		n = n->next;
	}
}
void LinkedList::print()
{
	Node* n = head;
	while (n != NULL)
	{
		cout << n->token << " ";
		n = n->next;
	}
}
void LinkedList::commaprint()
{
	Node* n = head;
	while (n != NULL)
	{
		cout << n->token << " , ";
		n = n->next;
	}
}
bool LinkedList::exists(string t)
{
	Node* n = head;
	bool exists = false;
	while (n != NULL)
	{
		if (n->token == t)
		{
			exists = true;
		}
		n = n->next;
	}
	return exists;
}
bool LinkedList::isHead(string t)
{
	bool isHead;
	if (t == head->token)
	{
		isHead = true;
	}
	else
	{
		isHead = false;
	}
	return isHead;
}

int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "ERROR: Wrong number of args\n";
		return -1;
	}
	string line;

	LinkedList* operators = new LinkedList();
	LinkedList* delimiters = new LinkedList();
	LinkedList* constants = new LinkedList();
	LinkedList* keywords = new LinkedList();
	LinkedList* identifiers = new LinkedList();
	LinkedList* unknowns = new LinkedList();
	LinkedList* forsparenths = new LinkedList();

	bool f = false;
	bool b = false;
	bool e = false;
	int numpar1 = 0;
	int numpar2 = 0;
	int numfor = 0;
	int numbegin = 0;
	int numend = 0;

	ifstream myfile(argv[1]);
	if (!myfile)
	{
		cerr << "Input file could not be opened" << endl;
		return -1;
	}

	while (getline(myfile, line))
	{
		
		for (int i = 0; i < line.size(); ++i)
		{
			if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '=')
			{
				
				if (line[i + 1] == line[i])
				{
					string op = string() + line[i] + line[i];
					if (!operators->exists(op))
					{
						operators->insert(op);
					}
					++i;
					continue;
				}
				else
				{
					string op = string() + line[i];
					if (!operators->exists(op))
					{
						operators->insert(op);
					}
					continue;
				}
			}
			if (line[i] == '(')
			{
				++numpar1;
				forsparenths->insert("(");
				continue;
			}
			if (line[i] == ')')
			{
				++numpar2;
				forsparenths->insert(")");
				continue;
			}
			if (line[i] == ',' || line[i] == ';')
			{
				string del = string() + line[i];
				if (!delimiters->exists(del))
				{
					delimiters->insert(del);
				}
				continue;
			}
			if (isdigit(line[i]))
			{
				string con = string() + line[i];
				int j = i + 1;
				while (isdigit(line[j]))
				{
					con += line[j];
					++i;
					++j;
				}
				if (!constants->exists(con))
				{
					constants->insert(con);
				}
				continue;
			}
			if (isupper(line[i]))
			{
				string key = string() + line[i];
				int j = i + 1;
				while (isupper(line[j]))
				{
					key += line[j];
					++i;
					++j;
				}
				if (key == "FOR")
				{
					++numfor;
					f = true;
					if (!keywords->exists(key))
					{
						keywords->insert(key);
					}
					forsparenths->insert("FOR");
				}
				else if (key == "BEGIN")
				{
					++numbegin;
					b = true;
					if (!keywords->exists(key))
					{
						keywords->insert(key);
					}
					forsparenths->insert("BEGIN");
				}
				else if (key == "END")
				{
					++numend;
					e = true;
					if (!keywords->exists(key))
					{
						keywords->insert(key);
					}
					forsparenths->insert("END");
					continue;
				}
				else
				{
					if (!unknowns->exists(key))
					{
						unknowns->insert(key);
					}
				}
				continue;
			}
			if (islower(line[i]))
			{
				string id = string() + line[i];
				int j = i + 1;
				while (islower(line[j]))
				{
					id += line[j];
					++i;
					++j;
				}
				if (!identifiers->exists(id))
				{
					identifiers->insert(id);
				}
				continue;
			}
			if (line[i] = ' ')
			{
				continue;
			}
			
		}
	}

	Node* n = forsparenths->head;
	while (n != NULL)
	{
		if (n->token == "BEGIN")
		{
			if (n->next->token != ")" && n->next->next->token != "(" && n->next->next->next->token != "FOR")
			{
				unknowns->insert("FOR/BEGIN/() Error");
			}
		}
		if (n->token == ")")
		{
			if (n->next->token != "(")
			{
				unknowns->insert("() Error");
			}
		}
		n = n->next;
	}
	
	if (numpar1 < numpar2)
	{
		unknowns->insert(")");	
	}
	if (numpar1 > numpar2)
	{
		unknowns->insert("(");
	}
	if (numbegin < numend)
	{
		unknowns->insert("Missing BEGIN");
	}
	if (numend < numbegin)
	{
		unknowns->insert("Missing END");
	}
	if (numfor < numend || numfor < numbegin)
	{
		unknowns->insert("Missing FOR");
	}

	cout << "The depth of nested loop(s) is " << numfor - 1 << endl;
	
	cout << "Keywords: ";
	keywords->print();
	cout << endl;

	cout << "Identifiers: ";
	identifiers->print();
	cout << endl;

	cout << "Constants: ";
	constants->print();
	cout << endl;

	cout << "Operators: ";
	operators->print();
	cout << endl;

	cout << "Delimiters: ";
	delimiters->print();
	cout << endl;

	cout << "Syntax Error(s): ";
	unknowns->commaprint();
	cout << endl;
	
	myfile.close();
	return 0;
}