#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to insert a new node at the end of the list
void insert(Node*& head, int data) {
    Node* new_node = new Node(data);
    if (head == nullptr) {
        head = new_node;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Function to merge two linked lists alternatively
Node* mergeAlternate(Node* head1, Node* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    Node* mergedHead = head1;

    while (head1 != nullptr && head2 != nullptr) {
        Node* temp1 = head1->next;
        Node* temp2 = head2->next;

        head1->next = head2;
        head2->next = temp1;

        head1 = temp1;
        head2 = temp2;
    }

    if (head2 != nullptr) {
        head1->next = head2;
    }

    return mergedHead;
}

// Function to display the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head1 = nullptr;
    Node* head2 = nullptr;

    // Insert elements into list 1
    insert(head1, 1);
    insert(head1, 3);
    insert(head1, 5);

    // Insert elements into list 2
    insert(head2, 2);
    insert(head2, 4);
    insert(head2, 6);

    cout << "List 1: ";
    displayList(head1);

    cout << "List 2: ";
    displayList(head2);

    Node* mergedList = mergeAlternate(head1, head2);

    cout << "Merged List: ";
    displayList(mergedList);

    return 0;
}
