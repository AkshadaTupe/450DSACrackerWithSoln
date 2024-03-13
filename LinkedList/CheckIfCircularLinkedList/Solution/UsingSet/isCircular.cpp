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
    bool isCircular(Node *head)
	{
		if(head == NULL)
			return true;
			
		Node* dummy = new Node(0);
		dummy->next = head;
		   
		unordered_set<Node*> map;
		   
		while(dummy->next != NULL)
		{
			if(map.find(dummy->next) != map.end())
			{
				dummy->next = NULL;
				return true;
			}
			else{
				map.insert(dummy->next);
			}
			dummy = dummy->next;
		}
		return false;
	}
};
