class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode* head=new ListNode();  //添加头节点
       ListNode* l=head;  //l->next写入链表节点，将头节点与链表节点连接起来。这行不可缺，用这个结点指针不断偏移来将各点连接起来
    //   ListNode* l=new ListNode();
        while(l1!=nullptr&&l2!=nullptr)
        {    if(l1->val>=l2->val){
             l->next=l2;  //刷新l->next的值
             l2=l2->next;  
             }
           else 
           {l->next=l1;   l1=l1->next;} 
           l=l->next;  //刷新l的值.其实l->next是当前l2或l1的值
        }
        if(l2!=nullptr)
        l->next=l2;
        else if(l1!=nullptr)
        l->next=l1;
    return head->next;//输出拼接结果，不含头节点
    }
};
