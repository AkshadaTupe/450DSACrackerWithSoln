# Approach

**Recursive Addition:**

- The function **performAddOne** is a recursive function that performs the addition of 1 to the linked list.
- It takes a node temp as input and recursively calls itself with the next node (temp->next).
- The base case checks if the current node (temp) is NULL, indicating the end of the linked list. If so, it returns 1 to propagate the carry.

**Handling Carry:**

- The recursive calls return the carry value.
- The current node's data (temp->data) is updated by adding the carry.
- If the sum is 10, set the data to 0 and return 1 as the carry for the previous node. Otherwise, return 0.

**Perform Recursive Addition on the Original List:**

- The addOne function starts the addition by calling performAddOne with the head of the linked list.
- It captures the final carry value.

**Handle Final Carry:**

- If there is still a carry after the addition, insert a new node with value 1 at the beginning of the linked list.

**Return the Result:**

Return the modified linked list.

**Here's a summary of the logic:**

- Recursively traverse the linked list, adding 1 and handling carries.
- Start from the least significant digit and propagate the carry to higher digits.
- After the recursive addition, handle the final carry (if any) by inserting a new node at the beginning.
- Return the final linked list.

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(N)**
because the algorithm uses a backtracking.

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
