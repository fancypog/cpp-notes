#include <iostream>
using namespace std;


class Node {
public:
    int value;
    Node* Next;
};

void insertAtTheFront(Node**head, int newValue) {
    Node* newNode = new Node();
    newNode->value = newValue;

    newNode->Next = *head;

    *head = newNode;

}

void deleteNode(Node**head, int position) {
    Node*current = *head;
    Node*previous = *head;

    if (*head == NULL)
        printf("List is already empty!");

    else if(position == 1){
        *head = current->Next;
        free(current);
        current = NULL;
    } 
    else
    { 
        while(position != 1) {
            previous = current;
            current = current->Next;
            position--;
        } previous->Next = current->Next;
            free(current);
            current = NULL;
    }

}

void printList(Node* n) {
    cout << "The linked list is as follows: " << endl;
    while(n != NULL) {
        cout << n->value << "\n";
        n = n->Next;
    }
    
    cout << "That's the end of the linked list. " << endl;
}

void searchList(Node*p, int searchValue) {
    cout << "...Searching the list..." << endl;
    //iterative way O(n)
    if(p == NULL) {
        cout << "Empty list " << endl;
    }
    
    while(p != NULL) {
        if(p->value == searchValue) {
            cout << "element " << searchValue << " found: " << endl;
            cout << p << endl;
        }
        p = p ->Next;
    }

};

int main() {
    Node* head = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();
    Node* node5 = new Node();
    Node* node6 = new Node();
    Node* node7 = new Node();
    

    head->value = 1;
    head->Next = node2;

    node2->value = 2;
    node2->Next = node3;
        
    node3->value = 3;
    node3->Next = node4;
    
    node4->value = 4;
    node4->Next = node5;
        
    node5->value = 5;
    node5->Next = node6;
        
    node6->value = 6;
    node6->Next = node7;

    node7->value = 7;
    node7->Next = NULL;

    printList(head);
    deleteNode(&head, 1);
    printList(head);
}



