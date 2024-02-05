/* LinkedList Node Structure
struct Node
{
    int data;
    struct Node *next;
};*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
       if (head == NULL || head->next == NULL)
        return head;
        
        Node* reverseLinkedList = NULL;
        
        while(head != NULL)
        {
            Node* tempList = head->next;
            
            head->next = reverseLinkedList;
            
            reverseLinkedList = head;
            
            head = tempList;
        }
        
        return reverseLinkedList;
    }
    
};

