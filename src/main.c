#include <unistd.h>

int my_print_alpha(void);
int my_print_revalpha(void);


int main(void)
{
    my_print_alpha();
    my_print_revalpha();
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
