# Approach

- Initialize temp1 to the head of the first linked list (head1).
- Create an unordered_map (mp) to store nodes of the first linked list along with their data values.
- Traverse the first linked list (head1) using a while loop until temp1 becomes NULL:
	
	a. Insert the current node (temp1) and its data value into the unordered_map (mp).
	
	b. Move temp1 to the next node.
- Initialize temp2 to the head of the second linked list (head2).
- Traverse the second linked list (head2) using a while loop until temp2 becomes NULL:
	
	a. Check if the current node (temp2) is present in the unordered_map (mp):
	
		i. If found, return the data value of the common node (temp2->data).
	b. Move temp2 to the next node.
- If no intersection is found, return -1.

# Complexity
**- Time complexity : O(N+M)**
because it traverse first and second linked list

**- Space complexity : O(N)**
because store all the nodes from the first linked list

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
	int intersectPoint(Node* head1, Node* head2)
	{
		Node* temp1 = head1;
		unordered_map<Node* , int> mp ;
		
		while(temp1 != NULL)
		{
			mp.insert({temp1,temp1->data});
			temp1 = temp1->next;
		}
		
		 Node* temp2 = head2;
		while(temp2 != NULL)
		{
			if (mp.find(temp2) != mp.end())
				return temp2->data;
			
			temp2 = temp2->next;
		}
		
		return -1;
	}
    
};
```
