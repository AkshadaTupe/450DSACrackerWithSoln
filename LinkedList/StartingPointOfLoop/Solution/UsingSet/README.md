# Approach
- Create an empty unordered set (s) to store visited nodes.

- Iterate through the linked list using a while loop. In each iteration:

- Check if the current node (**head**) is already in the set s. If it is, then a loop is detected, and the function returns **head**.

- If the current node is not in the set, insert it into the set.

- Move the **head** pointer to the next node.

- If the end of the linked list is reached (i.e., **head** becomes NULL), return NULL as there is no loop.


# Complexity
- Time complexity: O(N)
Only one traversal of the loop is needed

- Space complexity: O(N)
  where N is the space required to store the value in the hashmap

# Code
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> map;

        while(head != NULL)
        {
            if(map.find(head) != map.end())    //Node already present
            {
                return head;
            }
            else
            {
                map.insert(head);
            }
            head = head->next;
        }

        return NULL;
    }
};
```