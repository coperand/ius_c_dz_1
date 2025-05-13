#include <stdio.h>

int main() {
    char a = '.';
    int balance = 0;
    do
    {
        scanf("%c", &a);

        if(a == '(' && balance >= 0)
            ++balance;
        else if(a == ')')
            --balance;
    }
    while(a != '.');

    printf("%s\n", (balance == 0) ? "YES" : "NO");
}
