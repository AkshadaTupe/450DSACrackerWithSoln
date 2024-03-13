# Approach
Here we are going to use **Hare Tortoise Algorithm / Floyd's Cycle Detection Algorithm** 

**Loop Detection:**

- Initialize two pointers, **slow** and **fast**, to the **head** of the linked list.

- Use a while loop to traverse the linked list:

  In each iteration, move the **slow** pointer one step and the **fast** pointer two steps.

  Inside the loop, check if the **slow** pointer is equal to the **fast** pointer. If they are equal, it indicates a loop in the linked list.

- If there is a loop, the slow and fast pointers will meet at some point within the loop, and the loop breaks.

**Check the Loop:**

- If a loop is detected , return true.

- **Special case** : If **slow** and **fast** meet at the **head** itself, it means the loop starts from the **head**. In this case, **fast** is moved to the last node of the loop.

- Otherwise, both pointers move one step at a time until they meet again. This meeting point is the start of the loop.

Finally, the loop is broken by setting **fast->next** to NULL.

# Reference

https://iq.opengenus.org/detect-and-remove-loop-in-linked-list/

# Complexity
**- Time complexity : O(N)**
where N is the number of nodes in the linked list, as each node is visited once.

**- Space complexity : O(1)**
because the algorithm uses a constant amount of additional space regardless of the size of the input.

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
	bool isCircular(Node *head)
	{
		  if(head == NULL)
		return true;
		
		Node* slow = head;
		Node* fast = head;
		
		while(fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;
			 if(slow == fast)
				return true;
		}
		
		return false;
	}
		
};
```
