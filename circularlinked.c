#include <stdio.h>
#include <stdlib.h>

struct node{
    /* data */
    int data;
    struct node *next;
};

struct node *last = NULL;

void insertAtFront(int data){

    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if(last == NULL){
        temp->data = data;
        temp->next = temp;
        last = temp;
    }

    else{
        
        temp->data = data;
        temp->next = last->next;
        last->next = temp;
    }
}

// void insertAtlast(int data){

//     struct node *temp;
//     temp = (struct node*)malloc(sizeof(struct node));

//     if(last == NULL){
//         temp->data = data;
//         temp->next = temp;
//         last = temp;
//     }    

//     else{
//         temp->data = data;
//         last->next = temp->next;
//         temp->next = last;
//     }
// }

void viewList(){

    if(last == NULL){
        printf("empty");
    }

    else{

        struct node *temp;
        temp = last->next;

        do{
            printf("\n%d", temp->data);
            temp = temp->next;
        } while(temp != last->next);
    }
}

int main(){

    // insertAtFront(10);
    // insertAtFront(20);
    // insertAtFront(30);

    // insertAtlast(10);
    // insertAtlast(20);
    // insertAtlast(30);

    viewList();

    return 0;
}

