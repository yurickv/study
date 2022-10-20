#include <stdio.h>
# include <cs50.h>
int main(void)
{
    printf("hello, world\n");
    printf("i am Yura\n");
    string name = get_string("And what is your name?\n");
    printf("hello, %s\n", name);
}
