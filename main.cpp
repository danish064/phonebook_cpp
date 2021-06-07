#include <iostream>
#include "Node.h"
#include "Phonebook.h"
using namespace std;


int main()
{
    PhoneBook p;

    p.insert(new Node("Danish", "Lhr", "035420110"));
    p.insert(new Node("Baba", "Lhr", "035420110"));
    p.insert(new Node("Zalma", "Lhr", "035420110"));
    p.insert(new Node("Zblma", "Lhr", "035420110"));
    p.insert(new Node("Awais", "Swl", "0354235520110"));
    p.insert(new Node("Aaaa", "Isl", "0334220110"));
    p.insert(new Node("Abaa", "Isl", "0334220110"));
    p.insert(new Node("Az", "Isl", "0334220110"));

    // p.insert(new Node("Bhai", "Isl", "0334220110"));
    p.print();
}