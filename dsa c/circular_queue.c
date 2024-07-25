#include <stdio.h>


#define MAXSIZE 10
int  FRONT =  -1;
int REAR = -1;
int stack[MAXSIZE];

void insert(int data){
    if((REAR+1)%MAXSIZE==FRONT){
        printf("queue is overflow");
    }else{
        int temp ;
        printf("enter a value to inssert");
        scanf("%d",&temp)
        if(REAR==-1 && FRONT == -1){
            REAR =  0;
            FRONT = 0;
        }else{
            REAR = REAR % MAXSIZE + 1;
        }
        stack[REAR] = temp
    }

void delete(){
    if(REAR ==-1 && FRONT == -1){
        printf("queue is empty ");
    }else{
        printf("%d is deleted",arr[FRONT])
        FRONT = FRONT%MAXSIZE -1 ;
    }
}

void display(){
    if(REAR > FRONT){
    for(int i = FRONT ,i<=REAR , i++){
        printf("%d",arr[i]);

    }else{
        for(int )
    }
    }
}   
}
