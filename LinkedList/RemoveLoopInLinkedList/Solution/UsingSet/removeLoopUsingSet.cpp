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
       Node* dummy = new Node(0);
       dummy->next = head;
       
       unordered_set<Node*> map;
       
       while(dummy->next != NULL)
       {
           if(map.find(dummy->next) != map.end())
           {
              dummy->next = NULL;
               break;
           }
           else{
               map.insert(dummy->next);
           }
           dummy = dummy->next;
       }
    }
};
