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
        this->next = NULL;
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

Node *insertAtIthPosition(Node *head, int data, int index)
{
    Node *temp = head;

    // index is -ve
    if (index < 0)
    {
        return head;
    }

    // index is 0
    if (index == 0)
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
        return head;
    }

    // insert at ith position
    for (int i = 0; i < index - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp)
    {
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
        return head;
    }
    return head;
}

Node *deleteAtIthPosition(Node *head, int index)
{
    if (index < 0)
    {
        return head;
    }

    if (index == 0)
    {
        Node *copyHead = head->next;
        head->next = NULL; // isolation of head node
        delete head;       // deallocate from memory
        return copyHead;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1 && temp; i++)
    {
        temp = temp->next;
    }

    // we add temp->next condition for greater than valid index cases
    if (temp && temp->next)
    {
        Node *deleteNode = temp->next;
        temp->next = temp->next->next;
        deleteNode->next = NULL; // isolate node to be deleted
        delete deleteNode;       // de allocate the memory
        return head;
    }
    return head;
}

int main()
{
    Node *head = takeInput();
    printLinkedList(head);
    cout << endl;
    Node *newHead = deleteAtIthPosition(head, 2);
    printLinkedList(newHead);
    // Node *nodeIth = printIthNode(head, 4);
    // if (nodeIth)
    // {
    //     cout << endl
    //          << nodeIth->data << endl;
    // }
    return 0;
}