#include<stdio.h>
int main(){
    int price,quantity,total;
    printf("Enter Price :");
    scanf("%d",&price);
    printf("Enter quantity:");
    scanf("%d",&quantity);

    total= price*quantity;
    printf("Total price of an item %d",total);
    

    
}