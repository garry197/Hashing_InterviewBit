/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    
    RandomListNode* tmp=A;
    
    unordered_map<RandomListNode*, RandomListNode*> map;
    
     RandomListNode* head=new  RandomListNode(A->label);
      RandomListNode* finale=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
         RandomListNode* p=new  RandomListNode(tmp->label);
         finale->next=p;
         finale=finale->next;
    }
    
    tmp=A;
    finale=head;
    while(tmp!=NULL)
    {
        map[tmp]=finale;
        tmp=tmp->next;
        finale=finale->next;
        
        
    }
    tmp=A;
    finale=head;
    while(finale!=NULL)
    {
        finale->random=map[tmp->random];
        finale=finale->next;
        tmp=tmp->next;
    }
    
    
    return head;
}
