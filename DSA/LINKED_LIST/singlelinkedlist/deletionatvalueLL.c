#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void linkedlisttransversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node*deletionatgivenvalue(struct node *head,int value){
    struct node *p=head;
    struct node *q=head->next;
    
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data=value){
    p->next=q->next;
    free(q);
    }
    return head;


}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;
    
    second->data=17;
    second->next=third;
    
    third->data=35;
    third->next=fourth;
    
    fourth->data=66;
    fourth->next=NULL;

    printf("linked list before deletion\n");
    linkedlisttransversal(head);
    printf("\n");
    printf("linked list after deletion\n");
    head=deletionatgivenvalue(head,17);
    linkedlisttransversal(head);

}
