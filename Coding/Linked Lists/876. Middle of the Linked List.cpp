class Solution {
public:
    int find_length(ListNode* head){
        if(head==nullptr)return 0;
        return 1+find_length(head->next);
    }
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *p = head;
        int count=0,len = find_length(head);
        while(count<len/2){
            p=p->next;
            count++;}
        return p;
        
    }
};
