class Solution {
public:
    int find_length(ListNode* head){
        if(head==nullptr)return 0;
        return 1+find_length(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)return nullptr;
        if(find_length(head)==n && head->next!=nullptr){
            ListNode * temp = head;
            head=head->next;
            delete temp;}
        if(find_length(head)==n && head->next==nullptr){
            delete head;
            return nullptr;}
        int len = find_length(head)-n;
        ListNode *ptr = head->next;
        if(len==1){
            head->next=ptr->next;
            return head;}
        head->next= removeNthFromEnd(head->next,n);
        return head;
        }
};
