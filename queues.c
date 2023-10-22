#include<stdio.h>
#include<stdlib.h>
//queue is a linear data structure
//insertion and deletion in FIFO order
//functions: isempty, isfull, enqueue, dequeue, peek, display
//in the beginning both front and rear are -1
//first insertion both front and rear are 0(will point to first element)

int queue[100];
int front=-1;
int rear=-1;
int n;
int isEmpty(){
    if (front==-1 || front>rear)
        return(1);
    else
        return(0);
}

int isFull(){
    if (rear==n-1){
        return(1);
    }
    else
        return(0);
}

void enqueue(int ele){
    if (isFull()){
        printf("queuue is full!!");
    }
    else{
        if (front==-1){
            front=0;
        }
        queue[++rear]=ele;
    }
}

void dequeue(){
    if(isEmpty()){
        printf("queue is empty!!");
    }
    else{
        front++;
    }
}

void display(){
    for(int i=front;i<=rear;i++){
        printf("printing...%d\n",queue[i]);
    }
}

int main(){
    printf("enter size of queue:");
    scanf("%d",&n);
    int ele;
    for(int i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&ele);
        enqueue(ele);
    }
    dequeue();
    display();
}
