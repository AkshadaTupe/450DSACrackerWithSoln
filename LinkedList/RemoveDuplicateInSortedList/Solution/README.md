# Approach
**Initialization:**
Here, **ptr** is initialized to the head of the linked list. If the linked list is empty (i.e., **head** is NULL)

**Iterating through the Linked List:**
The code uses a while loop to iterate through the linked list until **ptr** reaches the last node. This loop checks for duplicates and removes them.

**Checking for Duplicates:**
Inside the loop, it checks if the current node's value (**ptr->val**) is equal to the value of the next node (**ptr->next->val**). If they are equal, it means a duplicate is found. In such a case, the **ptr->next** is updated to skip the duplicate node and point to the next distinct node. This effectively removes the duplicate node from the linked list.

If the values are not equal, it means there is no duplicate, and **ptr** is moved to the next node.

# Complexity
- **Time complexity: O(N)**
since function iterates through each node once, and within each iteration, it performs constant time operations 

- **Space complexity: O(1)**
The function uses a single pointer (ptr) to traverse the linked list and does not use any additional data structures that depend on the input size. 

# Code
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
Node *removeDuplicates(Node *head)
{
      Node* ptr = head;
      if(ptr == NULL)
        return ptr;
        
        while(ptr->next != NULL)
        {
            if(ptr->data == ptr->next->data)
                ptr->next = ptr->next->next;
            else
                ptr = ptr->next;
        }
        return head;
}
```