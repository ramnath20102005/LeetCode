/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int v1,v2,c=0;
    struct ListNode *head=NULL,*tail,*newnode;
    while(l1!=NULL || l2!=NULL ||c==1){
        v1=(l1)?l1->val:0;
        v2=(l2)?l2->val:0;
        int res=v1+v2+c;
        
        c=res/10;
        res=res%10;
        newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
        newnode->val=res;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        l1=(l1)?l1->next:NULL;
        l2=(l2)?l2->next:NULL;
    }
    return head;
    
}