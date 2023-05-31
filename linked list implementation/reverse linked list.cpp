/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        

        ListNode* cur = head;
        ListNode* prev = NULL;

        while(cur!=NULL)
        {
        ListNode* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;  
        }
        return prev;

    }
};

//recursive method

Node *reverseLinkedListRec(Node *head)
{
    //Write your code here

	if(head==NULL||head->next==NULL)
	return head;

	Node* smallans = reverseLinkedListRec(head->next);
	
	Node* tail = head->next;
	tail->next=head;  //head->next->next=head;
	head->next=NULL;
	return smallans;

}
