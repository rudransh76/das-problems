/*#include <stdio.h>
void insert(int val);

int main(){
    int q[100],num,val;
    int front =-1;
    int rear=-1;
    printf("how many number");
    scanf("%d",&num);
    printf("enter elements");
    for(int i=0;i<num;i++){                 //not working
        scanf("%d",&q[i]);
    }
    void insert(int val){  
        
        if(rear==num-1){
            printf("queue overflow");
        }
        else{
            if(front==-1){
                front=0;
            }
            q[rear++]= val;
            printf("element %d inserted",val);
        }
    }
    void delete(){
        if(front==-1||front>rear){
            printf("overflow");
        }else{
            printf("element deleted",q[front++] );
        }
    
    }
    void show() {

        if (front == -1 || front > rear) {
            printf("Queue is empty\n");
        } else {
            printf("Queue elements: ");
            for (int i = front; i <= rear; i++) {
                printf("%d ", q[i]);
            }
        printf("\n");
        }
    }

    insert(5);
    delete();

    


}
    */
