#include<stdio.h>
int main(){
     int price,quantity;
     float gst,total;
     
    printf(" Enter price:");
     scanf("%d",&price);
   
     printf(" Enter gst:");
     scanf("%.2f",&gst);

      printf(" Enter quantity: \n");
     scanf("%d",&quantity);

     price += gst;
     printf("your price with gst is %.2f\n ",price);

     total=(float) price*quantity;
     printf(" total: %.2f", total);
}