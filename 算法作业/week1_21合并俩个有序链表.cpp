class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode* head=new ListNode();  //���ͷ�ڵ�
       ListNode* l=head;  //l->nextд������ڵ㣬��ͷ�ڵ�������ڵ��������������в���ȱ����������ָ�벻��ƫ������������������
    //   ListNode* l=new ListNode();
        while(l1!=nullptr&&l2!=nullptr)
        {    if(l1->val>=l2->val){
             l->next=l2;  //ˢ��l->next��ֵ
             l2=l2->next;  
             }
           else 
           {l->next=l1;   l1=l1->next;} 
           l=l->next;  //ˢ��l��ֵ.��ʵl->next�ǵ�ǰl2��l1��ֵ
        }
        if(l2!=nullptr)
        l->next=l2;
        else if(l1!=nullptr)
        l->next=l1;
    return head->next;//���ƴ�ӽ��������ͷ�ڵ�
    }
};
