#include<stdio.h>
int main(){
  char name[10];
  int roll_number,java,c,go,ruby,csharp,python,Total;
  float per;

  printf("Enter Your Name:");
  scanf("%s",&name);
  printf("Enter Your Roll Number:");
  scanf("%d",&roll_number);
  printf("Enter Your Java Marks :");
  scanf("%d",&java);
  printf("Enter Your C++ Marks :");
  scanf("%d",&c);
  printf("Enter Your go Marks :");
  scanf("%d",&go);
  printf("Enter Your ruby Marks :");
  scanf("%d",&ruby);
  printf("Enter Your c# Marks :");
  scanf("%d",&csharp);
  printf("Enter Your Python Marks :");
  scanf("%d",&python); 

if(java<=35){
  printf("F");
}else{
   printf(" Your Java Marks : %d/100 \n",java);
   printf(" Your C++ Marks :%d/100\n",c);
   printf(" Your go Marks :%d/100\n",go);
   printf(" Your ruby Marks :%d/100\n",ruby);
   printf(" Your c# Marks :%d/100\n",csharp);
   printf(" Your Python Marks :%d/100\n",python);
}
 Total=java+c+go+ruby+csharp+python;
  printf("Total = %d/600\n",Total);
  
  per=(float)Total*100/600;
  printf("per = %.2f%%\n",per);

  float grade;
  printf("Enter Percentage : ");
  scanf("%f",&grade);
  printf("Your grade is :");
  if(grade>=80 && grade<=100){
    printf("A");
  }else if(grade>=60 && grade<=80){
     printf("B");
  }else if(grade>=40 && grade<=60){
     printf("C");
  }else if(grade>=30 && grade<=40){
     printf("C");
  }else{
    printf("Fail");
  }

}