/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
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
