#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *takeInput()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;
    cin >> data;

    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

Node *takeInputFromHead()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;
    cin >> data;

    while (data != -1)
    {
        Node *n = new Node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
        cin >> data;
    }
    return head;
}

int lenghtOfLinkedList(Node *head)
{
    Node *temp = head;
    int length = 0;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

Node *printIthNode(Node *head, int index)
{

    // if (index < 0 || index > lenghtOfLinkedList(head) - 1)//using length is O(n) complexity
    // {
    //     return NULL;
    // }

    if (index < 0)
    {
        return NULL;
    }

    Node *temp = head;
    for (int i = 0; i < index && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp)
    {
        return temp;
    }
    else
    {
        cout << "Index jyaade" << endl;
        return NULL;
    }
}

int main()
{
    Node *head = takeInput();
    printLinkedList(head);

    Node *nodeIth = printIthNode(head, 4);
    if (nodeIth)
    {
        cout << endl
             << nodeIth->data << endl;
    }
    return 0;
}