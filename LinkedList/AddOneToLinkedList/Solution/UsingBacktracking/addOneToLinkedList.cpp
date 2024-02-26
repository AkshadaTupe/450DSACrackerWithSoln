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
	int performAddOne(Node* temp)
    {
        if(temp == NULL)
            return 1;
        
        int carry = performAddOne(temp->next);
        
        temp->data = temp->data + carry;
        if(temp->data == 10)
        {
            temp->data = 0;
            return 1;
        }
        else
            return 0;
    }
    
    Node* addOne(Node *head) 
    {
       int carry =  performAddOne(head);
       
       if(carry == 1)
        {
            Node* tempNew = new Node(1);
            tempNew->next = head;
            return tempNew;
        }
        
        return head;
    }
};
