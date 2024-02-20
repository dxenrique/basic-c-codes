#include<stdio.h>
int main(){

char ch;
printf("enter character :\n");
scanf("%s",&ch);
if(ch >= 65 && ch <=90){
    printf("UPPER CASE\n");
}else if(ch >= 97 && ch <=122){
    printf("lower case\n");
}
else {
    printf("not an alphabet");
}
return 0;


}
