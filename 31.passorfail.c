#include<stdio.h>
int main()
{
int marks;
printf("enter marks (0-100) \n");
scanf("%d",&marks);
if (marks<=30){
    printf("FAIL\n");
}else if (marks>30 && marks<=100){
    printf("PASS\n");
}else {
    printf("invalid marks");
}
return 0;





}