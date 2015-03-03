#include <stdio.h>

int main(){
    char str1[50], str2[50], str3[100];
    int i,j;
    gets(str1);
    gets(str2);
    for(i=0; str1[i]!='\0'; i++){
        str3[i]=str1[i];
    }
    for(j=0; str2[j]!='\0'; j++){
        str3[i]=str2[j];
        i++;
    }
    str3[i]='\0';
    puts(str3);
}
