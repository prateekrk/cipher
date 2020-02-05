#include<stdio.h>
void main(){
char message[10000],ch,out[10000];
int key;
printf("enter message:");
scanf("%s",&message);
printf("Enter key");
scanf("%d",&key);
for(int i=0;i<10000;i++){
out[i]=message[i]+key+1;
printf("%c",out[i]);
}
}
