# Approach

**Dummy Node Creation**

- A dummy node is created and set as the next of the dummy node to the head of the linked list. This is done to handle the case where the loop is present at the beginning of the linked list, making it easier to detect the loop.

**Unordered Set**

- An unordered_set named map is created to store the nodes as they are traversed. The set is used to keep track of the nodes encountered during the traversal.

- A while loop is used to iterate through the linked list. The loop continues until the end of the linked list is reached (dummy->next != NULL).

- Inside the loop, it checks if the next node (dummy->next) is already present in the unordered_set map. If it is, then it means a loop is detected, and the next pointer of the current node is set to NULL to break the loop.

- Finally, the dummy node is moved to the next node in the linked list to continue the traversal.

# Complexity
**- Time complexity : O(N)**

Only one traversal of the loop is needed

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
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
       Node* dummy = new Node(0);
       dummy->next = head;
       
       unordered_set<Node*> map;
       
       while(dummy->next != NULL)
       {
           if(map.find(dummy->next) != map.end())
           {
              dummy->next = NULL;
               break;
           }
           else{
               map.insert(dummy->next);
           }
           dummy = dummy->next;
       }
    }
};
```
