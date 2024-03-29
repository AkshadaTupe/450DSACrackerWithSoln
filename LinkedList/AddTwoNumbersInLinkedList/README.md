# Add two numbers represented by linked lists

**Question** : https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

Example 1:

Input:

N = 2

valueN[] = {4,5}

M = 3

valueM[] = {3,4,5}

Output: 3 9 0  

Explanation: For the given two linked
list (4 5) and (3 4 5), after adding
the two linked list resultant linked
list will be (3 9 0).

Example 2:

Input:

N = 2

valueN[] = {6,3}

M = 1

valueM[] = {7}

Output: 7 0

Explanation: For the given two linked
list (6 3) and (7), after adding the
two linked list resultant linked list
will be (7 0).

Your Task:

The task is to complete the function addTwoLists() which has node reference of both the linked lists and returns the head of the sum list.   

**Expected Time Complexity: O(N+M)**

**Expected Auxiliary Space: O(Max(N,M)) for the resultant list**
