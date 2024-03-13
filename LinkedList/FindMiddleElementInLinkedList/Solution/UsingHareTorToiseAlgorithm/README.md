# Approach

**Initialization:**

Two pointers, slow and fast, are initialized to the head of the linked list.

**Traversing:**

In each iteration of the loop, the slow pointer moves one step forward while the fast pointer moves two steps forward. This way, the fast pointer moves twice as fast as the slow pointer.

**Middle Node:**

When the fast pointer reaches the end of the list (or NULL), the slow pointer will be at the middle of the list. This is because the fast pointer covers twice the distance compared to the slow pointer, so when the fast pointer reaches the end, the slow pointer will be at the middle.

**Returning Data:**

Finally, the data of the middle node, pointed to by the slow pointer, is returned.

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(1)**
because no extra space is required

# Code
```
/* LinkedList Node Structure
struct Node
{
    int data;
    struct Node *next;
};*/
class Solution
{
    public:
    int getMiddle(Node *head)
    {
       Node* slow = head;
       Node* fast = head;
       
       while(fast != NULL && fast->next != NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
       }
       
       return slow->data;
    }
    
};
```
