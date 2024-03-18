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
