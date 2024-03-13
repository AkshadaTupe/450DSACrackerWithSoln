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
    int getMiddle(Node *head)
    {
       //find length of LinkedList
       
       int len = 0;
       Node* ptr = head;
       
       while(ptr != NULL)
       {
           len++;
           ptr = ptr->next;
       }
       
       int count = len/2;
       
       ptr = head;
       
       while(count != 0)
       {
           ptr = ptr->next;
           count--;
       }
       
       return ptr->data;
    }
};
