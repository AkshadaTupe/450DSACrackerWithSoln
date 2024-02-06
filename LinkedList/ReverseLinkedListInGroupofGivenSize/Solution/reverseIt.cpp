/*
struct node
{
    int data;
    struct node* next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
}
*/
class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        node* curr = head;
        node* reverseList = NULL;
        node* tempList = NULL;
        
        int count = 0 ;
        
        while(curr != NULL && count < k)
        {
            tempList = curr->next;
            curr->next = reverseList;
            reverseList = curr;
            curr = tempList;
            
            count++;
        }
        
        if(tempList != NULL)
        {
            head->next = reverseIt(tempList,k);
        }
        
        return reverseList;
    }
};