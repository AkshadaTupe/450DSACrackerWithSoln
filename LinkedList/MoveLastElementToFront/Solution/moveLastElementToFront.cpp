/* LinkedList ListNode Structure
struct ListNode
{
    int data;
    struct ListNode *next;
};*/

class Solution
{
  public:
    ListNode *moveToFront(ListNode *head){
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* ptr = head;
 
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ListNode* temp = ptr->next;
        ptr->next = NULL;
        temp->next = head;
        
        return temp;
    }
    
};

