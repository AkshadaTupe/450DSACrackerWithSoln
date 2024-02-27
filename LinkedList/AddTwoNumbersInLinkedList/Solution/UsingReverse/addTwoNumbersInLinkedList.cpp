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
    struct Node* reverseList(Node* head)
    {
        if(head == NULL || head->next == NULL)
            return head;
            
        Node* newList = NULL;

        while(head != NULL)
        {
            Node* temp = head->next;
            head->next = newList;
            newList = head;
            head = temp;
        }
        return newList;
    }
    
    struct Node* performAddition(Node* first,Node* second)
    {
          Node* dummy = new Node(0);
          Node* tmpDummy = dummy;
          
          int sum = 0, carry = 0;
          
          while( first != NULL || second != NULL || carry != 0 )
          
          {
              sum = 0;
              
              if(first != NULL)
              {
                  sum += first->data;
                  first = first->next;
              }
              
              if(second != NULL)
              {
                  sum += second->data;
                  second = second->next;
              }
              
              sum += carry;
              carry = sum/10;
              
              Node* newNode = new Node(sum%10);
              tmpDummy->next = newNode;
              
              tmpDummy = tmpDummy->next;
          }
          
          return dummy->next;
        }
    }
  
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* firstRev = reverseList(first);
        
        Node* secondRev = reverseList(second);
        
        Node* addList = performAddition(firstRev,secondRev);
        
        return reverseList(addList);
    }
};
