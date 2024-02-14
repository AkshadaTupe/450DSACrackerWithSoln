# Approach
**Initialization:**
The function starts by initializing a pointer ptr to the head of the linked list.
It also creates an unordered set named map to store unique values encountered in the linked list.

**Iterating through the Linked List:**
The code uses a while loop to iterate through the linked list until **ptr** reaches the last node. This loop checks for duplicates and removes them.

**Checking for Duplicates:**
If a duplicate is found (i.e., the next node's data is already in the set), the code skips the duplicate node by adjusting the next pointer of the current node.

If the value is not a duplicate, it is added to the set (map), and the pointer ptr is moved to the next node in the linked list.

After traversing the entire linked list and removing duplicates as necessary, the function returns the head of the modified linked list.

# Complexity
- **Time complexity: O(N)**
since function iterates through each node once, and within each iteration, it performs constant time operations 

- **Space complexity: O(N)**
The code uses an unordered set (unordered_set<int> map) to keep track of unique values encountered so far.

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
 
    Node * removeDuplicates( Node *head) 
    {
      Node* ptr = head;
      unordered_set<int> map;
      
      map.insert(ptr->data);
      
      while(ptr->next != NULL)
      {
          if(map.find(ptr->next->data) != map.end())
          {
              ptr->next = ptr->next->next;
          }
          else
          {
              map.insert(ptr->next->data);
              ptr = ptr->next;
          }
      }
       
       return head;
    }
```