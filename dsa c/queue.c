#include <stdio.h>

//first in first out insert   delete  display 


#define MAXSIZE 10
int  FRONT =  0;
int REAR = -1;
int stack[MAXSIZE];




void insert(int data){
    if(REAR >= MAXSIZE-1){
        printf("Stack is full\n");
    }
    else{
        
        stack[REAR + 1] = data; 
        REAR = REAR + 1;
}
}

void delete(){
    if(REAR >= 0){
        printf("%d element is deleted\n", stack[FRONT]);
        FRONT = FRONT + 1;
    }else{
        printf("stack is empty \n");
    }
}

void display(){
    printf("displaying......\n");
    if(FRONT >= 0){
        for(int i = FRONT; i <= REAR; i++){
            printf("%d \n", stack[i]);
        }
    }else{
        printf("stack is empty \n");
    }
}

int main(){
    int run = 1;
    int data ; 

    while(run == 1){

        int k ;

        printf("enter a choice : \n");
        scanf("%d",&k);
        
        switch(k){
            case 1:
                printf("enter data to insert ");
                scanf("%d", &data);
                insert(data);
                break ;
            case 2 :
                delete();
                break ;
            case 3:
                display();
                break ;
            case 4:
                run = 0;
                break ;
        }
    }
    return 0 ;
}
