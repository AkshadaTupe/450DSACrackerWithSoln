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
       Node* temp = head;
       
       stack<Node*> stackList;
       
       while(temp->next != NULL)
       {
           stackList.push(temp);
           temp = temp->next;
       }
       
       head = temp;   // New Head
       
       while(!stackList.empty())
       {
           temp->next = stackList.top();
           temp = temp->next;
           stackList.pop();
       }
       
       temp->next = NULL;
       
       return head;
    }
    
};

