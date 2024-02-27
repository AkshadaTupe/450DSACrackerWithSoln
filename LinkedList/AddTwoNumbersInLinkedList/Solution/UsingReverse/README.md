# Approach

**Reverse the Input Lists:**

firstRev = reverseList(first); reverses the first linked list.

secondRev = reverseList(second); reverses the second linked list.

**Perform Addition:**

addList = performAddition(firstRev, secondRev); performs addition on the reversed linked lists using the performAddition function.

**Addition Algorithm (performAddition):**

- Initialize a dummy node to 0 (dummy).

- Initialize a temporary dummy pointer (tmpDummy) to the dummy node.

- Initialize sum and carry to 0.

- Loop until both linked lists and carry are exhausted.

- In each iteration, calculate the sum of corresponding digits from both linked lists and the carry.

- Create a new node with the unit digit of the sum and update the carry for the next iteration.

- Connect the new node to the result linked list.

- Move the temporary dummy pointer to the new node.

- Continue the loop until both input lists and carry are processed.

**Return the Result:**

return reverseList(addList); reverses the result linked list before returning it.

**Here's a summary of the logic:**

- Reverse both input linked lists.

- Perform addition on the reversed linked lists, digit by digit, considering any carry.

- Create a new linked list to store the result.

- Reverse the result linked list before returning.

# Complexity
**- Time complexity : : O(N+M)**
where N is the number of nodes in the first linked list and M is number of nodes in second linked list, as each node is visited once.

**- Space complexity : O(Max(N,M))**

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
	
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* firstRev = reverseList(first);
        
        Node* secondRev = reverseList(second);
        
        Node* addList = performAddition(firstRev,secondRev);
        
        return reverseList(addList);
    }
    
};
```
