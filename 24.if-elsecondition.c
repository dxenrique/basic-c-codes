#include<stdio.h>
int main()
{
int age;
printf("enter age :\n");
scanf("%d",&age);

if(age>18){
    printf("adult\n");
    printf("can drive\n");
    printf("can vote\n");

}else{
    printf("not adult\n");
}

printf("thank you");
return 0;



}