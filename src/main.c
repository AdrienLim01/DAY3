#include <stdio.h>
#include <unistd.h>
#include <string.h>

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);


int main(void)
{
    my_print_alpha();
    my_print_revalpha();
    my_print_digits();
    return 0;
}

int my_print_alpha(void)
{
    char caractere = 'a';

    while (caractere<='z'){
        write(1, &caractere, 1);
        caractere++;
    }
    return 0;
}

int my_print_revalpha(void)
{
    char caractere = 'z';
    
    while (caractere >= 'a'){
        write(1, &caractere, 1);
        caractere--;
    }
    return 0;
}

int my_print_digits(void)
{
    char buffer[20];
    
    for (int i = 0; i < 10; i++){
        sprintf(buffer, "%d", i);
        write(1, buffer, strlen(buffer));
        write(1, " ", 1);
    }
    return 0;
}
