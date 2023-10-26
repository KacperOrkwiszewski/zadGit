#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("Podaj liczbe od 0 do 10: ");
    int number = 0;
    scanf("%d", &number);
    if(number < 0 || number > 10)
    {
        printf("Zla liczba\n");
        return 1;
    }
    int myNumber = rand() % 11;
    if(myNumber > number)
        printf("Wygralem!!!\n");
    else if(myNumber < number)
        printf("Wygrales :(\n");
    else
        printf("Remis\n");
    printf("Dzieki za gre\n");
    return 0;
}
