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
	Node* reverseList(Node* head) {
        if(head == NULL || head->next == NULL)
            return head;

        Node* newLinkedList = NULL;
        while(head != NULL)
        {
            Node* nextList = head->next;
            head->next = newLinkedList;
            newLinkedList = head;
            head = nextList;
        }
        
        return newLinkedList;
    }
    
    Node* addOne(Node *head) 
    {
       Node* headRev =  reverseList(head);  // reverse the linked list
       
       Node* ptr = headRev;
       
       int carry = 1;
        
        while(ptr != NULL )
        {
            ptr->data = ptr->data  + carry;
            
            if(ptr->data < 10)   // if there is no carry forward
            {
                carry  = 0;
                break;
            }
    
            else
            {
                ptr->data = 0;
                carry = 1;
                ptr = ptr->next;
            }
        }
        
        Node* headAddOne = reverseList(headRev);  // Again reverse the linked list
        
        if(carry == 1)
        {
       
          Node* temp = new Node(1);
          temp->next = headAddOne;
           return temp;
        }
      
        
        return headAddOne;
    }
};
