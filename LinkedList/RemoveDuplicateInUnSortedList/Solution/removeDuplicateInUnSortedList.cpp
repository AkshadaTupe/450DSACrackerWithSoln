/* LinkedList Node Structure
struct Node
{
    int data;
    struct Node *next;
};*/

class Solution
{
  public:
 //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      Node* ptr = head;
      unordered_set<int> map;
      
      map.insert(ptr->data);
      
      while(ptr->next != NULL)
      {
          if(map.find(ptr->next->data) != map.end())
          {
              ptr->next = ptr->next->next;
          }
          else
          {
              map.insert(ptr->next->data);
              ptr = ptr->next;
          }
      }
       
       return head;
    }
    
};

