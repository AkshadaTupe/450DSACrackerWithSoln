# Approach

**Base Case:**

If Linked List is empty or there is only one element in Linked List then return the same Linked List i.e. **head**

**Initialization:**

The function starts by initializing a pointer **ptr** to the **head** of the linked list.


**Iterating through the Linked List:**

The code uses a while loop to iterate through the linked list until **ptr** reaches the second last last node.

**After Iteartion**

- One New pointer temp is created to store last element of linked list 

- After that second last element next node is made NULL

- And temp->next node will be pointed to head 

- Finally return the temp

# Complexity
- **Time complexity: O(N)**

since function iterates through each node once, and within each iteration, it performs constant time operations 

- **Space complexity: O(1)**

The algorithm uses a constant amount of extra space, regardless of the size of the input linked list.
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
 
    ListNode *moveToFront(ListNode *head){
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* ptr = head;
 
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ListNode* temp = ptr->next;
        ptr->next = NULL;
        temp->next = head;
        
        return temp;
    }
```