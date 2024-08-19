#include "iostream"      // Include the input-output stream library
using namespace std;     // Use the standard namespace

// Creating a node class
class Node {
    public:
        int data;        // Data field to store the value of the node
        Node* next;      // Pointer to the next node in the list
};

int main() {
    Node* head;          // Pointer to the head of the linked list
    Node* one = NULL;    // Initialize a pointer for the first node
    Node* two = NULL;    // Initialize a pointer for the second node
    Node* three = NULL;  // Initialize a pointer for the third node

    // Dynamically allocate memory for the nodes
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign data to each node
    one->data = 1;       // First node holds the value 1
    two->data = 2;       // Second node holds the value 2
    three->data = 3;     // Third node holds the value 3

    // Link the nodes together to form a linked list
    one->next = two;     // First node points to the second node
    two->next = three;   // Second node points to the third node
    three->next = NULL;  // Third node is the last node and points to NULL

    head = one;          // Head points to the first node in the list

    // Traverse the linked list and print the data of each node
    while(head) {
        cout << head->data << " ";  // Output the data of the current node
        head = head->next;          // Move to the next node
    }

    return 0;            // End the program
}
