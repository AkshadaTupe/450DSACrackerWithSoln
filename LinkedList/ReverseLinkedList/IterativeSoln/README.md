# Approach
**1. Initialization:**

***newLinkedList*** is initialized to NULL. This pointer will eventually become the ***new head*** of the reversed list.

**2. Iterative Reversal (While Loop):**

The code uses a while loop that continues until the original linked list (***head***) becomes NULL.
Inside the loop:

- ***nextList*** is used to temporarily store the next node in the original list.
- ***head->next*** is modified to point to the reversed portion of the list (***newLinkedList***).
- ***newLinkedList*** is updated to point to the current node (***head***), effectively adding it to the reversed list.
- ***head*** is moved to the next node (***nextList***) to continue the iteration.

**3. Return Reversed List:**

After the while loop exits, the function returns ***newLinkedList***, which now points to the ***head*** of the reversed list.

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(1)**
because the algorithm uses a constant amount of additional space regardless of the size of the input.

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