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
