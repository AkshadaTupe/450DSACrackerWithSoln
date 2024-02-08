# Approach
- Create an empty unordered set (s) to store visited nodes.

- Iterate through the linked list using a while loop. In each iteration:

- Check if the current node (head) is already in the set s. If it is, then a loop is detected, and the function returns true.

- If the current node is not in the set, insert it into the set.

- Move the head pointer to the next node.

- If the end of the linked list is reached (i.e., head becomes NULL), return false as there is no loop.

# Complexity
**- Time complexity : O(N)**
Only one traversal of the loop is needed.

**- Space complexity : O(N)**
where N is the space required to store the value in the hashmap

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
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
       unordered_set<Node*> s;
        
        while(head != NULL)
        {
            if (s.find(head) != s.end())
                return true;
            
            s.insert(head);
            
            head = head->next;
        }
        return false;
    }
};
```
