/* LinkedList Node Structure
struct Node
{
    int data;
    struct Node *next;
};*/

class Solution
{
  public:
		Node *removeDuplicates(Node *head)
		{
			  Node* ptr = head;
			  if(ptr == NULL)
				return ptr;
				
				while(ptr->next != NULL)
				{
					if(ptr->data == ptr->next->data)
						ptr->next = ptr->next->next;
					else
						ptr = ptr->next;
				}
				return head;
		}
    
};

