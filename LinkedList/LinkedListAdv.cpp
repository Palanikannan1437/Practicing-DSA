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
    cout << endl;
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

int lengthOfLLRecursive(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int smallAns = lengthOfLLRecursive(head->next);
    return 1 + smallAns;
}

bool isPresentIterative(Node *head, int target)
{
    Node *temp = head;
    while (temp)
    {
        if (target == temp->data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

bool isPresentRecursive(Node *head, int target)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return false;
    }

    if (temp->data == target)
    {
        return true;
    }

    bool smallAns = isPresentRecursive(temp->next, target);
    return smallAns;
}

Node *findMidPoint(Node *head)
{
    Node *temp = head;
    Node *slow = head;
    Node *fast = head->next;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast && fast->next == NULL)
    {
        return slow->next;
    }
    return slow;
}

Node *reverseLL(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr)
    {
        Node *n = curr->next;
        curr->next = prev;

        prev = curr;
        curr = n;
    }
    return prev;
}

int main()
{
    Node *head = takeInput();
    printLinkedList(reverseLL(head));
    return 0;
}