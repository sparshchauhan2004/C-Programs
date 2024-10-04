#include<stdio.h>
int main(){
    char name[50];
    int rollnumber;
    float marks1,marks2,marks3,totalmarks,percentage;
    printf("enter your name");
    scanf("%s",name);
    printf("enter your rollnumber");
    scanf("%d",&rollnumber);
    printf("enter  marks for subject1:");
    scanf("%f",&marks1);
    printf("enter marks for subject2:");
    scanf("%f",&marks2);
    printf("enter marks for subject3:");
    scanf("%f",&marks3);
    totalmarks=marks1+marks2+marks3;
    percentage=(totalmarks/300*100);
    printf("name:%s\n",name);
    printf("Roll Number:%d\n",rollnumber);
    printf("Total Marks:%2f\n",totalmarks);
    printf("percentage is:%2f\n",percentage);
    return 0;

}