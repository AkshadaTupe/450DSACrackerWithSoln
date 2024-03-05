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
	//Function to find intersection point in Y shaped Linked Lists.
	int intersectPoint(Node* head1, Node* head2)
	{
		Node* temp1 = head1;
		Node* temp2 = head2;
		
		while(temp1 != NULL || temp2 != NULL)
		{
			if(temp1 == NULL && temp2 != NULL)
				temp1 = head2;
			
			if(temp2 == NULL && temp1 != NULL)
				temp2 = head1;
			
			 if(temp1 == NULL && temp2 == NULL)
			   return -1;
			
			if(temp1 == temp2)
				return temp1->data;
			
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		
		return -1;
	}
};
