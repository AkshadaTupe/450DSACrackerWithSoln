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
     ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> map;

        while(head != NULL)
        {
            if(map.find(head) != map.end())    //Node already present
            {
                return head;
            }
            else
            {
                map.insert(head);
            }
            head = head->next;
        }

        return NULL;
    }
};
