# Approach

**Find the length of Both Linked List:**

findLength is a function that takes a linked list's head as input and returns its length.

**Check if the heads are the same:**

- If the heads of both linked lists are the same, it means they intersect at the beginning, and the common node is the intersection point.

**Adjust the starting points:**

- If the lengths of the linked lists are not the same, adjust the starting point of the longer linked list so that both linked lists have the same distance from their respective ends.
- The adjustment is done using the findIntersection function, which takes the heads of both linked lists and the difference in lengths as parameters.
- The findIntersection function iterates through the longer linked list until it reaches a position where both linked lists are equidistant from their ends.

**Find the intersection point:**

- Once the starting points are adjusted, iterate through both linked lists simultaneously until a common node is found.
- The intersection point is the first common node encountered during the iteration.

**Return the result:**

- If an intersection point is found, return its data. Otherwise, return -1 to indicate that there is no intersection.

# Complexity
**- Time complexity : O(N + M)**
where N and M is the number of nodes in the two linked list, as each node is visited once.

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
	int findIntersection(Node* Lhead, Node* Shead, int diff)
	{
		while(diff != 0)
		{
			diff--;
			Lhead = Lhead->next;
		}
		
		while(Lhead != NULL)
		{
			if(Lhead == Shead)
				return Lhead->data;
			
			Lhead = Lhead->next;
			Shead = Shead->next;
		}
		return -1;
	}

	int findLength(Node* head)
	{
		Node* temp = head;
		int len = 0;
		
		while(temp != NULL)
		{
			len++;
			temp = temp->next;
		}
		
		return len;
	}
	//Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node* head1, Node* head2)
	{
	  // find length of both linked list
	  
		int lenHead1 = findLength(head1);
		
		int lenHead2 = findLength(head2);
		 
		if(head1 == head2)
			return head1->data;
			
		if(lenHead1 > lenHead2)  //First Linked List is Larger
			return findIntersection(head1 , head2 , lenHead1-lenHead2);

		if(lenHead2 > lenHead1)  //Second Linked List is Larger
			return findIntersection(head2 , head1 , lenHead2-lenHead1);
		
		return -1;
	}
};
```
