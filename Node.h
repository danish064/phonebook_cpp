#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node 
{
public:
    string name;
    string number;
    string city;
    Node* next;
    Node()
    {
        next = NULL;
    }
    Node(string name, string city, string number)
    {
        this->name = name;
        this->number = number;
        this->city = city;
        next = NULL;
    }
};

#endif
