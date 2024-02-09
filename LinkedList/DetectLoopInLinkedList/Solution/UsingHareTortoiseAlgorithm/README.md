# Approach
Here we are going to use **Hare Tortoise Algorithm** 

**Initialization:**

Initialize two pointers, **slow** and **fast**, to the **head** of the linked list.

Loop Detection:
Use a while loop to traverse the linked list.
In each iteration, move the **slow** pointer one step and the **fast** pointer two steps.

Check for Loop:
Inside the loop, check if the **slow** pointer is equal to the **fast** pointer. If they are equal, it indicates a loop in the linked list.

If the loop exits without finding any matching pointers, return false, indicating that there is no loop in the linked list.

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
