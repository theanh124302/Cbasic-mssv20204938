#include<stdio.h>
#define ALPHABET_LEN 26
int main(void)
{
    int i = 0,
    count[ALPHABET_LEN] = {0};
    char c = '\0';
    printf("Please enter a line of text: \n");
    /* Read in letter by letter and update the count array */
    c = getchar();
    while (c != '\n' && c >= 0)
    {
        if (c <= 'z' && c >= 'a')
        ++count[c - 'a'];
        if (c <= 'Z' && c >= 'A')
        ++count[c - 'A'];
        if((c<'A'||(c>'Z'&&c<'a')||c>'z')){
            printf("'%c' is not a letter\n",c); //em khong gioi tieng Anh a, neu sai ngu phap mong thay sua lai giup em, em cam on a
        }
        c = getchar();
    }
    for (i = 0; i < ALPHABET_LEN; ++i) {
        if (count[i] > 0)
            printf("The letter '%c' appears %d time(s).\n", 'a' + i,count[i]);
    }
    return 0;
}
