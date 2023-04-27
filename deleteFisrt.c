#include <stdio.h>
#include <stdlib.h>

struct node{
  
    int data;
    struct node* next;
};

struct node* last = NULL;

void addatLast(int data){

    struct node* temp;
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
        last = temp;
    }
}

void deleteFisrt(){

    struct node* temp;

    if(last==NULL){
        printf("empty");
    }

    else{

        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}

void viewList(){

    if(last==NULL){
        printf("empty");
    }

    else{

        struct node* temp;
        temp = last->next;
        
        do{
            printf("\n%d", temp->data);
            temp = temp->next;
        } while(temp != last->next);
    }
}

int main(){

    addatLast(10);
    addatLast(20);
    addatLast(30);

    viewList();

    deleteFisrt();

    viewList();

    return 0;
}