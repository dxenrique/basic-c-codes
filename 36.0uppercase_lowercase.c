#include<stdio.h>
int main(){

char ch;
printf("enter character\n");
scanf("%s",&ch);
if(ch >= 'A' && ch <='Z'){
    printf("UPPER CASE\n");
}else if(ch >='a' && ch <='z'){
    printf("lower case\n");
}
else {
    printf("not an alphabet");
}
return 0;


}
