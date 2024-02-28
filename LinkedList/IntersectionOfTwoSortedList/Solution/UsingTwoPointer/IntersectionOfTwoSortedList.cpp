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
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node* dummy = new Node(0);
        
        Node* temp = dummy;
        
        while(head1 != NULL && head2 != NULL)
        {
            if(head1->data == head2->data)
            {
                Node* intersect = new Node(head1->data);
                temp->next = intersect;
                temp = temp->next;
                
                head1 = head1->next;
                head2 = head2->next;
            }
            else if(head1->data > head2->data)
                head2 = head2->next;
            else
                head1 = head1->next;
        }
        return dummy->next;
    }
};
