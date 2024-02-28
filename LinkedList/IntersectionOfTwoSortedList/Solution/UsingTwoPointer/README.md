# Approach

**Initialize Pointers**

- Create a dummy node (dummy) to simplify the code and avoid special cases for the head.

- Initialize a pointer (temp) to the dummy node.

**Iterate through the Lists**

- Use a while loop to iterate through both linked lists (head1 and head2).
- Compare the data values of the current nodes in both lists.
- If the data values are equal, it means there is an intersection. A new node is created with this data value, and it is linked to the result linked list.
- The pointers (head1 and head2) are then moved to the next nodes in both linked lists.
- If the data values are not equal, the pointers of the list with the smaller data value are moved to the next node.
- The process continues until one of the lists is exhausted.

**Return the Result:**

- Return the next node after the dummy node, which contains the head of the resulting linked list representing the intersection.

# Complexity
**- Time complexity : O(min(N, M))**
The code efficiently takes advantage of the fact that the input lists are sorted, allowing for a linear time traversal to identify common elements

**- Space complexity : O(min(N, M))**
due to the space required for the result linked list

# Code
```
/* LinkedList Node Structure
struct Node
{
    int data;
    struct Node *next;
};*/
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
```
