#include<stdio.h>
#define HELLO "Hello there! What is your name?"
#define POLITE "nice to meet you!"
#define RUDE "I dont care, go away!"

int main(void){
    char *name;
    printf(HELLO);
    gets(name);
    printf("Hi %s,%s",name,POLITE);
    return 0;
}