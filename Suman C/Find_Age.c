#include<stdio.h>
int main(){
    int birthYear,birthMonth,birthDay;
    int currentYear,currentMonth,currentDay;

    //Date of birth section
    printf("Enter Your Birth Year: ");
    scanf("%d",&birthYear);
    printf("Enter Your Birth Month: ");
    scanf("%d",&birthMonth);
     printf("Enter Your Birth Day: ");
    scanf("%d",&birthDay);

    //Current Year section
    printf("Enter Your Current Year: ");
    scanf("%d",&currentYear);
    printf("Enter Your Current  Month: ");
    scanf("%d",&currentMonth);
    printf("Enter Your Current  Day: ");
    scanf("%d",&currentDay);

    int ageYear=currentYear-birthYear;
    int ageMonth=currentMonth-currentMonth;
    int ageDay=currentDay-currentDay;

    printf("Your Age is %d Year %d Month %d Day",ageYear,ageMonth,ageDay);











}