# Approach
**1. Initialization:**

- Create a temporary pointer temp and initialize it with the head of the linked list (head).

**2. Create a Stack:**

- Create a stack (stackList) to store the elements of the linked list in reverse order.

**3. Traverse and Push:**

- Use a while loop to traverse the original linked list (temp != NULL).
- Inside the loop, push the data of the current node (temp->data) onto the stack and move to the next node (temp = temp->next).

**4.Reverse the Linked List:**

- Reset the temp pointer to the head of the linked list.
- Use another while loop to traverse the linked list again (temp != NULL).
- Inside this loop, update the data of each node by popping the top element from the stack (stackList.top()) and then pop that element from the stack.
- Move to the next node in the linked list (temp = temp->next).

**Return Reversed Linked List:**

- Once the traversal and reversal are complete, return the head of the reversed linked list.

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(N)**
because the algorithm uses a stack to store all the elements of the linked list during the traversal

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
       Node* temp = head;
       
       stack<int> stackList;
       
       while(temp != NULL)
       {
           stackList.push(temp->data);
           temp = temp->next;
       }
       
       temp = head;
       while(temp != NULL)
       {
           temp->data = stackList.top();
           temp = temp->next;
           stackList.pop();
       }
       
       return head;
    }
    
};
```