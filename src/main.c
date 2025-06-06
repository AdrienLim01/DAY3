#include <stdio.h>
#include <unistd.h>
#include <string.h>

int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int print_my_comb(void);

int main(void)
{
    int n = -10;
    my_print_alpha();
    my_print_revalpha();
    my_print_digits();
    my_isneg(n);
    print_my_comb();
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

int my_isneg(int n)
{
    if (n < 0){
        write(1, "N", 1);
    }else{
        write(1, "P", 1);
    }
    return 0;
}

int print_my_comb()
{
    char comb[8];
    for (int i = 0; i <= 7; i++){
        for (int j = i + 1; j <= 8; j++){
            for (int k = j + 1; k <= 9; k++){
                if (!(i == 7 && j == 8 && k == 9)){
                    sprintf(comb, "%d%d%d, ", i, j, k);
                    write(1, comb, strlen(comb));
                }else{
                    sprintf(comb, "%d%d%d", i, j, k);
                    write(1, comb, strlen(comb));
                }
            }
        }
    }
    return 0;
}
