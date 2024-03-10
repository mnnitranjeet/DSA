#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
void insertElementEnd(int data){

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
   
    if(head == NULL){
        head = new_node;
    }
    else{
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;


    }
}

void insertElementBegining(int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    if(head == NULL){
        new_node->next = NULL;
        head           = new_node;

    }
    else{
        new_node->next = head;
        head           = new_node;
    }
}

void insertElementAfterNode(int data){
    int key;
    printf("Enter the elment after which you want to insert\n");
    scanf("%d",&key);
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    struct Node* temp = head;

    while(temp->data != key){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void insertElementBeforeNode(int data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    int key;
    printf("Enter the elment Before which you want to insert\n");
    scanf("%d",&key);
    struct Node* temp = head;
    struct Node* prev = head;
    if(head->data == key){
        new_node->next = head;
        head = new_node;

    }else{

        while(temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        new_node->next = temp; 
        prev->next     = new_node;

    }
}

void deleteLastNode(){
    struct Node* temp = head,*prev = NULL;
    if(head == NULL){
        printf("List is Empty \n");

    }
    else{
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        // check for one node
        if(prev == NULL){
            head = NULL;
            printf("Last Node = %d Deleted Successfully\n",temp->data);
        }
        else{
            prev->next = NULL;
            printf("Last Node = %d Deleted Successfully\n",temp->data);
        }
        
        
        free(temp);
    }
}
void deleteFirstNode(){
    struct  Node* temp = head;
    if(head == NULL){
        printf("List is Empty\n");
    }
    else{
        head = head->next;
        printf("First Node = %d Deleted Successfully\n",temp->data);


    }
    
    
}

void deleteAGivenNode(){
    int key;
    printf("Please enter a node which you want to delete\n");
    scanf("%d",&key);
    struct Node* temp = head,*prev = NULL;
    if(head == NULL){
        printf("List is Empty\n");
    }
    else{
        while(temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        if(prev == NULL){
            head = NULL;
            printf("%d Deleted Successfully\n",temp->data);
            free(temp);

        }
        else{
            prev->next = temp->next;
            printf("%d Deleted Successfully\n",temp->data);
            free(temp);

        }
    }
}

void searchElement(){
    int key;
    printf("Please enter the element which you want to search \n");
    scanf("%d",&key);
    struct Node* temp = head;
    while(temp->data != key && temp->next != NULL){
        //prev = temp;
        temp = temp->next;
    }
    //printf("%d Found \n",temp->data);
    if(temp->data == key){
        printf("%d Found \n",temp->data);
    }
    else{
        printf("%d Not Found \n",key);
    }
}


// Reversing Linked List using Array Means Extra Space

void reverseLL(){
    //printf("Hello In Side Reverse \n");
    struct Node* temp = head;
    int count = 0;


    while(temp != NULL){
        count++;
        temp = temp->next;
        
    }
   // printf("Copying linked list in array \n");
    int arr[count];
    temp = head;
    int i = 0;
    while(temp != NULL){
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    //printf("Array \n ");

    /*for(int k = 0; k < count; k++){
        printf("%d ",arr[k]);
    } */
    printf("\n");

    temp = head;
    int j = count-1;
    while(temp != NULL){
        temp->data = arr[j];
        temp = temp->next;
        j--;

    }

    temp = head;
    

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");

}

// Reversing Linked List Without Using extra space

void reverseWithoutExtraSpace(){
    struct Node* temp,*prev,*right;
    prev  = NULL;
    temp  = head;
    right = head;
    while(right != NULL){
        right = temp->next;
        temp->next = prev;
        prev = temp;
        temp = right;
    }
    //printf("Print Linked List \n");
    temp = prev;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");


}

void display(){
    struct Node* temp = head;
    if(head == NULL){
        printf("List Is Empty\n");
    }
    else{
         while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
}


int main(){
    int choice,data;
    while(1){
        // Insertion in all possible cases
        printf("Press : 1 : For Insert  Element At End In Linked List \n");
        printf("Press : 2 : For Insert  Element At Begining In Linked List \n");
        printf("Press : 3 : For Insert  Element After A Given Node  In Linked List \n");
        printf("Press : 4: For Insert  Element Before A Given Node  In Linked List \n");

        // Deletion in all possible cases
        printf("Press : 5 : For Delete  Last Node In Linked List \n");
        printf("Press : 6 : For Delete  First Node In Linked List \n");
        printf("Press : 7 : For Delete  Middle Element (A Given Node ) In Linked List \n");
        printf("Press : 8 : For Searching An Element From List \n");
        printf("Press : 9 : For Reverse Linked List \n");
 
        printf("Press : 10 : For Reverse Linked List Without Using Extra Space \n");
        printf("Press : 11 : For Display \n");
        printf("Press : 12 : For Exit \n");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Please Enter an element \n");
            scanf("%d",&data);
            insertElementEnd(data);
        }
        else if(choice == 2){
            printf("Please Enter an element \n");
            scanf("%d",&data);
            insertElementBegining(data);
            

        }
        else if(choice == 3){
            printf("Please Enter an element \n");
            scanf("%d",&data);
            insertElementAfterNode(data);

        }
        else if(choice == 4){
            printf("Please Enter an element \n");
            scanf("%d",&data);
            insertElementBeforeNode(data);
            

        }
        else if(choice == 5){
            deleteLastNode();
        }
        else if(choice == 6){
            deleteFirstNode();
        }
        else if(choice == 7){
            deleteAGivenNode();
        }
        else if(choice == 8){
            searchElement();

        }
        else if(choice == 9){
            reverseLL();

        }
        else if(choice == 10){
            reverseWithoutExtraSpace();

        }
        else if(choice == 11){
            display();
        }
        else if(choice == 12){
            exit(0);
        }
        else{
            printf("Invalid Choice \n");
        }

    }
}