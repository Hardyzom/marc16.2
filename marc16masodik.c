#include <stdio.h>
#include "prog1.h"
#include <string.h>


int rfind_char(string s, char c){
    int hossz=strlen(s);
    for(int i = hossz-1; i>=0; i--){
        if(s[i]==c){
            return i;
        }
    }
    return -1;
}

int main() {
    printf("%d\n",rfind_char("alma",'a'));
    printf("%d\n",rfind_char("alma",'l'));
    printf("%d\n",rfind_char("alma",'b'));
    return 0;
}