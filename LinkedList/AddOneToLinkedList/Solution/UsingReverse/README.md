# Approach

**Reverse the Linked List:**

**headRev = reverseList(head);** reverses the linked list. 

The reversed list will be used to simulate adding 1 from the least significant digit.

**Add 1 to the Reversed Linked List:**

- Initialize carry to 1.
- Traverse the reversed linked list and add the carry to each node's data.
- If the result is less than 10, set carry to 0 and break the loop.
- If the result is 10 or more, set the node's data to 0, update carry to 1, and move to the next node.

**Reverse the Modified Linked List:**

**headAddOne = reverseList(headRev);** reverses the modified linked list after adding 1.

**Handle the Carry:**

If there is still a carry after the addition, insert a new node with value 1 at the beginning of the linked list.

**Return the Result:**

Return the final linked list.

**Here's a summary of the logic:**

- Reverse the linked list.
- Traverse the reversed list, add 1, and handle carries.
- Reverse the modified list again.
- If there's still a carry, insert a new node at the beginning.
- Return the final linked list.

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
