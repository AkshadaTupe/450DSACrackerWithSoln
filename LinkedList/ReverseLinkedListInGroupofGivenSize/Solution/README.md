# Approach
**Initialize three pointers:**

**curr**: points to the current node being processed.
**reverseList**: points to the head of the reversed sublist.
**tempList**: used as a temporary pointer to keep track of the next node in the original list.
Initialize a counter **count** to 0, which tracks the number of nodes processed.

**Iterate**:
Iterate through the linked list using a while loop with two conditions

**curr** != NULL: Ensure there are nodes remaining to process.

**count** < **k**: Limit the loop to processing k nodes at a time.

Inside the loop:

a. Save the next node in **tempList** to avoid losing the connection to the rest of the list.

b. Reverse the link of the **current** node by pointing its next to the **reverseList**.

c. Move the **reverseList** pointer to the **current** node.

d. Move the **curr** pointer to the next node (**tempList**).

e. Increment the count variable.

**After the loop**:

check if there are remaining nodes (tempList != NULL). If true:

a. Point the head's next to the result of calling reverseIt recursively with tempList as the new head and k.

b. This step is necessary to connect the reversed sublist to the remaining part of the list.

**Return reverseList**

Finally, return the reverseList pointer, which now points to the new head of the reversed linked list.

# Complexity
**- Time complexity : O(N)**

where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(k)**

The space complexity is O(k) due to the temporary variables used in the function. 
Specifically, there are three pointers (curr, reverseList, and tempList), and the number of extra variables is constant regardless of the size of the input linked list.
The recursive call is made in constant space as well, as it only involves passing parameters and returning value

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
    struct node *reverseIt (struct node *head, int k)
    { 
        node* curr = head;
        node* reverseList = NULL;
        node* tempList = NULL;
        
        int count = 0 ;
        
        while(curr != NULL && count < k)
        {
            tempList = curr->next;
            curr->next = reverseList;
            reverseList = curr;
            curr = tempList;
            
            count++;
        }
        
        if(tempList != NULL)
        {
            head->next = reverseIt(tempList,k);
        }
        
        return reverseList;
    }
};
```
