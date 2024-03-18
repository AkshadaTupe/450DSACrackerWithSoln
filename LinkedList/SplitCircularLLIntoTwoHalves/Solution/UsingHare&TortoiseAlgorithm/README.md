# Approach
Here we are going to use **Hare Tortoise Algorithm / Floyd's Cycle Detection Algorithm** 

**Finding Midpoint:** 

The function uses the classic slow and fast pointer technique to find the midpoint of the circular linked list. The slow pointer moves one node at a time while the fast pointer moves two nodes at a time. When the fast pointer reaches the end of the list, the slow pointer will be at the midpoint.

**Splitting the List:** 

Once the midpoint is found, the function sets the head of the second list (*head2_ref) to the node after the midpoint. It then breaks the circular link in the first list by setting the next pointer of the node before the midpoint to head.

**Making Second List Circular:**

Finally, the function traverses to the end of the second list and sets its last node's next pointer to the head of the second list, making it circular.

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
	void splitList(Node *head, Node **head1_ref, Node **head2_ref)
	{
		*head1_ref = head; 
		Node* slow = head;
		Node* fast = head;
		
		while(fast->next != head && fast->next->next != head)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		*head2_ref = slow->next;
		
		slow->next = head;
	  
		fast = *head2_ref;
		
		while(fast->next != head)
		{
			fast = fast->next;
		}
		
		fast->next =  *head2_ref;
	}	
};
```
