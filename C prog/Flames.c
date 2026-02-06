#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char name1[50];
    char name2[50];
    int count=0;
    scanf(" %[^\n]",name1);
    scanf(" %[^\n]",name2);
    for(int i=0;name1[i]!='\0';i++){
        for(int j=0;name2[j]!='\0';j++){
            if(isalpha(name1[i])&&isalpha(name2[j])){
                if(tolower(name1[i])==tolower(name2[j])){
                    name1[i]='*';
                    name2[j]='*';
                    break;
                }
            }
        }
    }
    for(int i=0;name1[i]!='\0';i++){
        if(name1[i]!='*'){
            count++;
        }
    }
    for(int i=0;name2[i]!='\0';i++){
        if(name2[i]!='*'){
            count++;
        }
    }
    char flames[]="FLAMES";
    int len=6;
    int idx=0;
    while(len>1){
        idx=(idx+count-1)%len;
        for(int i=idx;i<len-1;i++){
            flames[i]=flames[i+1];
        }
        len--;
    }
    switch(flames[0]){
        case 'F': printf("Friends"); break;
        case 'L': printf("Love"); break;
        case 'A': printf("Affection"); break;
        case 'M': printf("Marriage"); break;
        case 'E': printf("Enemy"); break;
        case 'S': printf("Siblings"); break;
    }
}
