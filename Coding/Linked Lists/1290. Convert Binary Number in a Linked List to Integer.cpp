#include<cmath>
class Solution {
public:
    int find_length(ListNode *head){
        if(head==nullptr)return 0;
        return 1+find_length(head->next);
    }
    int getDecimalValue(ListNode* head) {
        if(head==nullptr)return 0;
        int length=find_length(head);
        int ans = (head->val)*pow(2,--length);
        return ans+getDecimalValue(head->next);
        
    }
};
