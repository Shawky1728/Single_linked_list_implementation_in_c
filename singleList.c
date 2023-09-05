#include "singleList.h"

void insert_Node_At_Beginning(struct Node **List){

    struct Node *temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(NULL!=temp){

       printf("enter your data \n");
       scanf("%d",&(temp->dataPtr));
       if(NULL == *List){
        temp->nodeLink=NULL;
        *List=temp;
       }
       else{
            temp->nodeLink=*List;
            *List=temp;
       }
    }
    else{

    }

}


void insert_Node_At_End(struct Node **List){

    struct Node *temp=NULL;
    struct Node *lastNode=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if(NULL!=temp){

       printf("enter your data \n");
       scanf("%d",&(temp->dataPtr));
        temp->nodeLink=NULL;
       if(NULL == *List){
        *List=temp;
       }
       else{
            lastNode=*List;
            while(lastNode->nodeLink!=NULL){
                lastNode=lastNode->nodeLink;
            }
            lastNode->nodeLink=temp;
       }
    }
    else{

    }

}


void insert_Node_After(struct Node *List){

    struct Node *temp=NULL;
    struct Node *nodeCounter=List;
    unsigned int counter=1,listSize=0,nodePosition=0;
    printf("Enter the position \n");
    scanf("%d",&nodePosition);
    if(nodePosition>get_Length(List)){
        printf("invalid node Position\n");
    }
    else{
          nodeCounter=List;
         while(counter<nodePosition){
                nodeCounter=nodeCounter->nodeLink;
                counter++;
            }

          temp=(struct Node*)malloc(sizeof(struct Node));
          if(NULL!=temp){

       printf("enter your data \n");
       scanf("%d",&(temp->dataPtr));
       temp->nodeLink=nodeCounter->nodeLink;
       nodeCounter->nodeLink=temp;

       }

    }


}


void delete_Node_At_Beginning(struct Node **List){

     struct Node *temp=*List;
     if(get_Length(*List)==0){
        printf("the List is empty \n");

     }
     else{

        *List=temp->nodeLink;
        temp->nodeLink=NULL;
        free(temp);
     }

}

void delete_Node(struct Node *List){

    struct Node *nextNode=List;
    struct Node *nodeCounter=List;
    unsigned int counter=1,listSize=0,nodePosition=0;
    printf("Enter the position you want to delete \n");
    scanf("%d",&nodePosition);
    if(nodePosition>get_Length(List) || 1 == get_Length(List) || nodePosition==1){
        printf("please use delete Node at beginning\n");
    }
    else{

         while(counter<(nodePosition-1)){
                counter++;
                nodeCounter=nodeCounter->nodeLink;
            }

            nextNode=nodeCounter->nodeLink;
            nodeCounter->nodeLink=nextNode->nodeLink;
            free(nextNode);

    }

}


void display_Node(struct Node *List){

     struct Node *nodeCounter=List;
     if(nodeCounter==NULL){
        printf("the list is empty\n");
     }
     else{
        printf("the values is ");
        while(nodeCounter !=NULL){
        printf("%d ",nodeCounter->dataPtr);
        nodeCounter=nodeCounter->nodeLink;

     }
      if(nodeCounter==NULL){
            printf("\n");
        }
    }
}


unsigned int get_Length(struct Node *List){

    unsigned int counter =0;
    struct Node *nodeCounter=List;
    while(nodeCounter!=NULL){
        counter++;
        nodeCounter=nodeCounter->nodeLink;
    }
return counter;
}




