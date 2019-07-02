#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char *name;
    char *phone;
}Query;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n;
    scanf("%d",&n);
    printf("%d",n);
    Query str[100];
    Query str1[100];
    for(i=0;i<n;i++){
        fflush(stdin);
        gets(str[i].name);
        fflush(stdin);
        gets(str[i].phone);
    }
    for(i=0;i<n;i++){
        fflush(stdin);
        gets(str1[i].name);
    }
    for(i=0;i<n;i++){
        if(str1[i].name==str[i].name){
            printf("%s=%s\n",str[i].name,str[i].phone);
        }
        else{
            printf("Not found\n");
        }
    }
    return 0;
}
