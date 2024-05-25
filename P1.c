#include<stdio.h>
int main(){
    int price,quantity,total;
     printf(" Enter price:");
     scanf("%d",&price);
     printf("price with GST: %d\n",price+10 );
      printf(" Enter quantity:");
     scanf("%d",&quantity);

     total=(price+10)*quantity;
     printf("Enter total: %d", total);

}