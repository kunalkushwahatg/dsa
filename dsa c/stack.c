#include <stdio.h>

#define MAXSIZE 10
int  TOP =  -1 ;
int stack[MAXSIZE];




void push(int data){
    if(TOP >= MAXSIZE-1){
        printf("Stack is full\n");
    }
    else{
        
        stack[TOP + 1] = data; 
        TOP = TOP + 1;
}
}

void pop(){
    if(TOP >= 0){
        printf("%d element is popped\n", stack[TOP]);
        TOP = TOP - 1;
    }else{
        printf("stack is empty \n");
    }
}

void display(){
    if(TOP >= 0){
        for(int i = TOP; i >= 0; i--){
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
                printf("enter data to push ");
                scanf("%d", &data);
                push(data);
                break ;
            case 2 :
                pop();
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
