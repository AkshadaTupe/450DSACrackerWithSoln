# Approach
Create an empty unordered set (s) to store visited nodes.

Iterate through the linked list using a while loop. In each iteration:

Check if the current node (head) is already in the set s. If it is, then a loop is detected, and the function returns true.

If the current node is not in the set, insert it into the set.

Move the head pointer to the next node.

If the end of the linked list is reached (i.e., head becomes NULL), return false as there is no loop.

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(N)**
N is the space required to store the value in the Set.

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
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
       if (head == NULL || head->next == NULL)
        return head;
        
        Node* reverseLinkedList = NULL;
        
        while(head != NULL)
        {
            Node* tempList = head->next;
            
            head->next = reverseLinkedList;
            
            reverseLinkedList = head;
            
            head = tempList;
        }
        
        return reverseLinkedList;
    }
    
};
```