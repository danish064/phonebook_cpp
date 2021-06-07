#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Node.h"
using namespace std;

class PhoneBook
{
    Node* head = NULL;

public:
    bool compare(Node* a, Node* b) {
        if (a->name > b->name) {
            // Node* temp = a;
            // a = b;
            // b = temp;
            return true;
        }
        return false;
    }
    void insert(Node* data)
    {
        if (head == NULL)
        {
            head = data;
        }
        else if (head->next == NULL) // If it is 2nd node
        {
            if(head->name > data->name) {
            //if (compare(head, data)) {
                data->next = head;
                head = data;
            }
            else {
                head->next = data;
            }
        }
        else // Sorting for 3rd... node
        {
            Node* p = head;
            Node* n = head->next;

            if (data->name < head->name) {
            // if (compare(head, data)) {
                data->next = head;
                head = data;
            }
            else {
                // p = p->next;
                // n = n->next;
                while (n->next != NULL)
                {
                    if (data->name > p->name && data->name < n->name) {
                        // if (data->name < n->name) {
                        p->next = data;
                        data->next = n;
                    }
                    p = p->next;
                    n = n->next;
                }
                if (data->name > p->name && data->name < n->name) {
                    // if (data->name < n->name) {
                    p->next = data;
                    data->next = n;
                }
                else if (data->name > n->name) {
                    n->next = data;
                }
            }
        }
    }
    void printNode(Node* d)
    {
        cout << "Name:\t" << d->name;
        cout << "\nCity:\t" << d->city;
        cout << "\nNumber:\t" << d->number << "\n\n";
    }
    void print()
    {
        Node* t = head;

        while (t->next != NULL)
        {
            printNode(t);
            //cout << endl;
            t = t->next;
        }
        printNode(t);
    }
};

#endif