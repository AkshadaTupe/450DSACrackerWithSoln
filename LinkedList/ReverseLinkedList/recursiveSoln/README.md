# Intuition
- The recursive approach is based on the idea of breaking the problem into smaller subproblems.
- The base case handles the termination condition when the list is empty or has only one node.
- The recursive call reverses the remaining portion of the list.
After the recursive call, pointer adjustments are made to reverse the current node.

# Approach
**Base Case:**

The function begins with a base case check: if the linked list is empty or has only one node (***head->next*** == NULL), it immediately returns the head because there is no need to reverse.

**Recursive Call:**

If the base case is not met, the function makes a recursive call to ***reverseList(head->next)***. 
This recursive call effectively reverses the rest of the list starting from the next node (***head->next***).

**Pointer Modifications:**

After the recursive call returns, the pointer adjustments are made to reverse the current node (***head***):
- ***head->next->next*** = ***head***
 The next node's next pointer is set to the current node, effectively reversing the link.
- ***head->next*** = NULL
The current node's next pointer is set to NULL to break the link with the rest of the reversed list.

**Return New Head:**

The function returns the new ***head*** of the reversed list, which is the original tail of the list (***newList***).

# Complexity
**- Time complexity: O(N)**
where N is the number of nodes in the linked list, as each node is visited once during the recursion

**- Space complexity: O(N)**
where N is the depth of the recursion stack. Each recursive call consumes space on the stack.


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
        if(head == NULL || head->next == NULL)
            return head;
        
        Node* reverseNewList = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return reverseNewList;
    }
    
};
```