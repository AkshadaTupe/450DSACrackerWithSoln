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
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                break;
            }
                
        }
        
        if(slow == fast)
        {
            slow = head;
            if (slow == fast)    //Check when slow and fast both meet at head of Linked List
            {
                 while (fast->next != slow)
                    fast = fast->next;
            }
            else {
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
        
            fast->next = NULL;
        }
        
    }
};
