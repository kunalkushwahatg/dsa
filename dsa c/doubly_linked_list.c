#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node *ladd;
    struct node *radd;
};

struct node *start = NULL , *temp , *new1  ,*prev , *next;

void create(){
    int n;
    printf("Enter an Element: ");
    scanf("%d",&n);

    new1 = (struct node*)malloc(sizeof(struct node));
    new1-> data = n;
    new1-> ladd = NULL;
    new1-> radd = NULL;

    start = new1;
    temp = start;

    printf("Want to continue? (y/n): ");
    char ch ;
    scanf(" %c",&ch);
    while(ch=='y' || ch == 'Y'){
        printf("Enter next Element: ");
        scanf("%d",&n);

        new1 = (struct node*)malloc(sizeof(struct node));
        new1->data = n;
        new1->ladd = temp;
        new1->radd = NULL;

        temp-> radd = new1;
        temp = temp-> radd ; 

        printf("Want to continue? (y/n): ");
        scanf(" %c",&ch);
    }

}

    void display(){
    temp = start;
    if(start == NULL){
        printf("list not found");
    }
    else{
        while(temp!= NULL){
            printf("\t %d",temp->data);
            temp = temp-> radd;
        }
    }
    printf("\n");
}


int main(){
    int run = 1;
    int data ; 

    printf("\n-------------LINKED LIST--------------\n");
    printf("1.Create\n");
    printf("2.Insert on First\n");
    printf("3.Insert on Last\n");
    printf("4.Insert on Middle\n");
    printf("5.Delete from First\n");
    printf("6.Delete from Last\n");
    printf("7.Delete from Middle\n");
    printf("8.Count the length of list\n");
    printf("9.Search an Element\n");
    printf("10.Display\n");
    printf("11.Exit\n");

    while(run == 1){
        int k ;
        printf("\n Enter a choice: \n");
        scanf("%d",&k);
        
        switch(k){

            case 1:
                create();
                break;
            // case 2:
            //     insertInFirst();
            //     break;

            // case 3:
            //     insertInLast();
            //     break;

            // case 4:
            //     insertInMiddle();
            //     break;

            // case 5:
            //     deleteFirst();
            //     break;

            // case 6:
            //     deleteLast();
            //     break;

            // case 7:
            //     deleteMiddle();
            //     break;

            // case 8:
            //     length();
            //     break;

            // case 9:
            //     search();
            //     break;

            case 10:
                display();
                break;

            // case 11:
            //     run = 0;
            //     break;
        }
    }
    return 0 ;
}


