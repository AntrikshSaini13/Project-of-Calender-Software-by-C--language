#include<stdio.h>
void main()
{
    char s[100];int i;
    puts("enter");
    gets(s);
    if(s[0]>='A'&&s[0]<='Z')s[0]+=32;
    for(i=1;s[i]!='\0';i++){
        if(s[i]==' ' && s[i+1] != ' ' && s[i+1]>='A' && s[i+1]<='Z'){
            s[i+1]+=32;
        if(s[i-1]!=' '&&s[i]>='a'&&s[i]<='z')
            s[i]-=32;
        }
    puts(s);
    // return 0;
}