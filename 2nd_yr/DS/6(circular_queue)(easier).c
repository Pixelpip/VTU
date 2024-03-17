#include<stdio.h>
#include<stdlib.h>
#define MAX 4
char q[MAX];
int front=0;
int rear=-1;
int count=0;
void insert(){
    if(count==MAX){
        printf("queue is full\n");
        return;
    }
    char ele;
    printf("enter a character to insert into CQ:");
    scanf(" %c",&ele);//add a spcae at the left of %c or else you wont be
                      //able to take input
    rear=(rear+1)%MAX;
    q[rear]=ele;
    count++;
}
void del(){
    if(count==0){
        printf("queue is empty\n");
        return;
    }
    printf("Deleted element:%c\n",q[front]);
    front=(front+1)%MAX;
    count--;
}
void display(){
    int j=front,i;
    if(count==0){
        printf("queue is empty\n");
        return;
    }
    printf("Elements within circualr queue are:\n");
    for(i=1;i<=count;i++){
        printf("%c\n",q[j]);
        j=(j+1)%MAX;
    }
}
void main(){
    int ch;
    do{
        printf("1.insert\t2.delete\t3.display\t4.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("enter a valid choice\n");
                break;
        }
    }while(1);
}
