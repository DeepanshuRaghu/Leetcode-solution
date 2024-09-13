class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // For Empty List
        //check if any Null linkedlist is there or not
        if(head == NULL)
        {
            return head;
        }
        //For Non-Empty List
        ListNode* curr = head;
        // check current and current nuxt both are non empty
        while(curr != NULL && curr -> next != NULL)
        {
            // this will check the value of current node and
            // next node are same
            if(curr -> val == curr -> next -> val)
            {
            // creating next pointer which will point at
            // curr next to next means this will shift my 2nd 
            // repeated element to the next element of that 2nd
                ListNode* next = curr -> next -> next;
            // this will delete my 2nd element
                delete(curr -> next);
            // shift my current next to next pointer
                curr -> next = next;
            }
            // If condition is not setisfied. values are different
            else
            {
                // shift my current to it's next element
                curr = curr -> next;
            }
        }
        // returing my head(OUTPUT)
        return head;
    }
};