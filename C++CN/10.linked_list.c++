#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data).
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
    node n1(12);
    node n2(22);             // upto now they are not joined bcoz both have null in their next so
    cout << n1.next << endl; // 0
    n1.next = &n2;
    cout << n2.next << endl; // 0
    node n3(43);
    cout << n3.next << endl; // 0
    n2.next = &n3;
    cout << n1.data << " " << n2.data << " " << n3.data << endl; // 12 22 43
    cout << n1.next << endl;                                     // 0x61fef0
    cout << n2.next << endl;                                     // 0x61fee8
    cout << n3.next << endl;                                     // 0

    // for dynamically
    node *n4 = new node(10);
    node *n5 = new node(20);
    n4->next = n5;
    // ororoorooror
    //  (*n4).next=n5;
    cout << (*n4).next << " " << n4->next << " " << n5 << endl; // 0xef1648 0xef1648 0xfb1648
    cout << (*n5).next << " " << n5->next << endl;              // 0 0
    return 0;
}

// now making  a head (head is starting complete node)

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
    void print(node *head)
    {
        // node *temp=head;  // use mentioned below
        // while (temp->next != NULL)
        // {
        //     cout << (*temp).data << " " << temp->data << endl;
        //     temp = temp->next; // change the position of head
        // }
        while (head->next != NULL) // or (head !=NULL)
        {
            cout << (*head).data << " " << head->data << endl;
            head = head->next; // change the position of head
        }
        // now after loop end head will be last node/tail hence below loop block return nothing so to avoid that make a temp pointer i,e  node *temp=head; but the main hed will remain u changed
        // while (head->next != NULL)
        // {
        //     cout << (*head).data << " " << head->data << endl;
        //     head = head->next; // change the position of head
        // }
    }
};
int main()
{
    node n1(12);
    node *head = &n1;
    node n2(22); // upto now they are not joined bcoz both have null in their next so
    n1.next = &n2;
    node n3(43);
    n2.next = &n3;
    cout << head->data << endl; // 12  // head me jo data h uspe jao or uska data print krdo
    head->print(head);          // 12 12 //22 22
    n1.print(head);             // 12 12 //22 22
    n3.print(head);             // 12 12 // 22  22

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *input()
{
    int data;
    cin >> data;
    node *head = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    while (head != NULL) // or (head !=NULL)
    {
        cout << (*head).data << endl;
        head = head->next;
    }
}
int main()
{
    node *head = input();
    print(head);
    return 0;
}

// after fixed by chat gpt

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
    node *input()
    {
        int data;
        cin >> data;
        node *head = nullptr;
        node *temp = nullptr;
        while (data != -1)
        {
            node *newnode = new node(data);
            if (head == nullptr)
            {
                head = newnode;
                temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = temp->next;
            }
            cin >> data;
        }
        return head;
    }
};

void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    node *head = nullptr;
    node *obj = new node(0);
    head = obj->input();
    print(head);
    return 0;
}
