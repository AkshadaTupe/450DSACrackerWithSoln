# Approach

**Finding Length:**

The code first iterates through the linked list once to find its length. This operation has a time complexity of O(n), where n is the number of nodes in the linked list.

**Traverse to Middle:**

After finding the length, the code traverses halfway through the list by dividing the length by 2. This traversal has a time complexity of O(n/2), which simplifies to O(n), since n/2 is still linear with respect to the number of nodes.

**Returning Data:**

Finally, it returns the data of the middle node. This operation has a constant time complexity of O(1).

**Here's a summary of the logic:**

- Find length of the linked list
- Initialize count with length/2 to find middle element
- Iterate the linked list till count becomes zero.
- Return the middle element

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
       //find length of LinkedList
       
       int len = 0;
       Node* ptr = head;
       
       while(ptr != NULL)
       {
           len++;
           ptr = ptr->next;
       }
       
       int count = len/2;
       
       ptr = head;
       
       while(count != 0)
       {
           ptr = ptr->next;
           count--;
       }
       
       return ptr->data;
    }
    
};
```
