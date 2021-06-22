#include<stdio.h>
#include<string.h>
int main(){
char message[50];
int message_len;
scanf("%s", message);
message_len = strlen(message);
printf("\"%s\" is a message of length %d characters",message,message_len);
return 0;
}
