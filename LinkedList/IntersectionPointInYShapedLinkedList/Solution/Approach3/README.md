# Approach

**Initialization:**

- Two pointers,**temp1** and **temp2**, are initialized to the heads of the respective linked lists (head1 and head2).

**Simultaneous Traversal:**

- The code enters a loop where it iterates through both linked lists simultaneously until one of the pointers (temp1 or temp2) reaches the end of its linked list..

**Adjusting Pointers if One Reaches the End:**

- If temp1 reaches the end of its linked list (temp1 == NULL) while temp2 is still active, move temp1 to the head of the other linked list (head2).
- Similarly, if temp2 reaches the end of its linked list (temp2 == NULL) while temp1 is still active, move temp2 to the head of the other linked list (head1).

**Checking for Intersection:**

- If both temp1 and temp2 become NULL simultaneously, it means both pointers have covered the combined length of both linked lists without finding an intersection point. In this case, return -1 to indicate no intersection.
- If temp1 and temp2 become equal during traversal, it means they have met at the intersection point. Return the data of the common node.

**Advancing Pointers:**

- In each iteration, both temp1 and temp2 are advanced to the next nodes in their respective linked lists.

**Return the result:**

- If an intersection point is found, return its data. Otherwise, return -1 to indicate that there is no intersection.

**Summary:**

- The key idea here is to iterate through both linked lists simultaneously and, if one pointer reaches the end of its linked list, move it to the head of the other linked list. This ensures that both pointers cover the combined length of both linked lists, and they will eventually meet at the intersection point if one exists.
# Complexity
**- Time complexity :  O(max(len1, len2))**
where len1 and len2 are the lengths of the two linked lists. The loop iterates through both linked lists, covering at most the maximum length.

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
