#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void append(Node *&head, int x)
{
    Node *n = new Node(x);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(Node *head)
{
    Node *temp = head;
    cout << "Head->";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
void del_head(Node *&head, int x)
{
    Node *del = head;
    head = head->next;
    delete del;
}
void del(Node *&head, int x)
{
    Node *temp = head;
    while (temp->next->data != x)
    {
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = temp->next->next;
    delete del;
}
int main()
{
    Node *head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    del(head, 3);
    print(head);
}