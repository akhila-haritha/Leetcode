class Solution {
public:
    ListNode * func(ListNode* l1, ListNode* l2,int carry){
        if(l1==nullptr && l2==nullptr && carry==0)return nullptr;
        
        

        //calculate units and carry
        int p,q,units,sum;
        if(l1==nullptr)p=0;
        else p=(l1->val);

        if(l2==nullptr)q=0;
        else q=(l2->val);

        units = (carry+p+q)%10;

        //Create a node
        ListNode *temp = new ListNode(units);
        carry = (carry+p+q)/10;

        
        if(l1!=nullptr || l2!=nullptr || carry!=0)
        temp->next = func(l1==nullptr?nullptr:l1->next,l2==nullptr?nullptr:l2->next,carry);
        return temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = func(l1,l2,0);
        return ans;
        
    }
};
      
