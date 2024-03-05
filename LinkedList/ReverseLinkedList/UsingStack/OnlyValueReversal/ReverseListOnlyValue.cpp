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
       
       stack<int> stackList;
       
       while(temp != NULL)
       {
           stackList.push(temp->data);
           temp = temp->next;
       }
       
       temp = head;
       while(temp != NULL)
       {
           temp->data = stackList.top();
           temp = temp->next;
           stackList.pop();
       }
       
       return head;
    }
    
};

