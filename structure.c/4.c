#include<stdio.h>
struct address{
    int houseno;
    int block;
    char state[100];
    char city[100];

};

void printfAdd(struct address add);
int main(){

    struct address adds[5];
        printf("enter the addresss of person 1:");
        scanf("%d" ,&adds[0].houseno);
        scanf("%d" ,&adds[0].block);
        scanf("%s" ,adds[0].state);
        scanf("%s" ,adds[0].city);

        printf("enter the addresss of person 2:");
        scanf("%d" ,&adds[1].houseno);
        scanf("%d" ,&adds[1].block);
        scanf("%s" ,adds[1].state);
        scanf("%s" ,adds[1].city);


        printf("enter the addresss of person 3:");
        scanf("%d" ,&adds[2].houseno);
        scanf("%d" ,&adds[2].block);
        scanf("%s" ,adds[2].state);
        scanf("%s" ,adds[2].city);

        printf("enter the addresss of person 4:");
        scanf("%d" ,&adds[3].houseno);
        scanf("%d" ,&adds[3].block);
        scanf("%s" ,adds[3].state);
        scanf("%s" ,adds[3].city);


        printf("enter the addresss of person 5:");
        scanf("%d" ,&adds[4].houseno);
        scanf("%d" ,&adds[4].block);
        scanf("%s" ,adds[4].state);
        scanf("%s" ,adds[4].city);

        printfAdd(adds[0]);
        printfAdd(adds[1]);
        printfAdd(adds[2]);
        printfAdd(adds[3]);
        printfAdd(adds[4]);
    

    return 0;
}
    void printfAdd(struct address add){
        printf("address is :%d,%d, %s, %s \n", add.houseno, add.block, add.state, add.city);

    }

