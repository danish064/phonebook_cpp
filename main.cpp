#include <iostream>
#include "Node.h"
#include "PhoneBook.h"
using namespace std;


int main()
{
	PhoneBook p;

	p.insert(new Node("Danish", "LHR", "035420110"));
	p.insert(new Node("Danish", "ISL", "34345453453453"));
	p.insert(new Node("Baba", "LHR", "035420110"));
	p.insert(new Node("Zalma", "SWL", "035420110"));
	p.insert(new Node("Zblma", "LHR", "035420110"));
	p.insert(new Node("Awais", "SWL", "0354235520110"));
	p.insert(new Node("Aaaa", "ISL", "0334220110"));
	p.insert(new Node("Abaa", "ISL", "0334220110"));
	p.insert(new Node("Az", "ISL", "0334220110"));
	system("cls");
	string query = "Danish";
	cout << "Querying '"<< query <<"': \n";
	PhoneBook* result = p.searchByName(query);
	if(result->size > 0) {
		cout << result->size << " result found\n";
		result->print();
	} else {
		cout << "No result found";
	}

	query = "LHR";
	cout << "Querying '"<< query <<"': \n";
	result = p.searchByCity(query);
	if(result->size > 0) {
		cout << result->size << " results found\n";
		result->print();
	} else {
		cout << "No result found";
	}

	// p.insert(new Node("Bhai", "ISL", "0334220110"));
	//p.print();
}
