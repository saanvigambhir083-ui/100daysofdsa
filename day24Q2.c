//Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val==val, and return the new head.
struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode dummy;
    dummy.next=head;
    struct ListNode* current=&dummy;
    while(current->next!=NULL) 
    {
        if (current->next->val==val) 
        {
            struct ListNode* temp=current->next;
            current->next=current->next->next;
            free(temp);
        } 
        else 
        {
          current=current->next;
        }
    }
    return dummy.next;
}
