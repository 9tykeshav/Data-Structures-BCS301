
// https://en.wikipedia.org/wiki/Tower_of_Hanoi
#include <stdio.h>

void toh(int N, char s, char m, char d)
{
    if (N == 1)
    {
        printf("%c -> %c\n", s, d);
    }
    else
    {
        toh(N - 1, s, d, m);
        printf("%c -> %c\n", s, d);
        toh(N - 1, m, s, d);
    }
}
int main()
{
    toh(3, 's', 'm', 'd');
    return 0;
}