#include <stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node*next;
}Node;
int main() {
   
   struct Node *head=(struct Node*)malloc(sizeof(struct Node));
   struct Node *second=(struct Node*)malloc(sizeof(struct Node));
   struct Node *third=(struct Node*)malloc(sizeof(struct Node));
   
   head->data=7;
   head->next=second;
   
   second->data=8;
   second->next=third;
   
   third->data=9;
   third->next=NULL;
   
   
    Node *ptr=head;   
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
       }
   
  
 
   
   return 0;
}