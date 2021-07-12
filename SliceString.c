#include <stdio.h>

void slice(char *st, int m, int n);

int main()
{
    char st[30];
    printf("Enter string : ");
    scanf("%s",st);
    slice(st, 2,17);
    printf("%s",st);
    return 0;
}

void slice(char *st, int m, int n){
    int i=0;
    while((m+i)<n){
        st[i]=st[m+i];
        i++;
    }
    st[i]='\0';


}