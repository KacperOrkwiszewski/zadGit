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
        printf("Zla liczba");
        return 1;
    }
    int myNumber = rand() % 11;
    if(myNumber > number)
        printf("Wygralem!!!");
    else if(myNumber < number)
        printf("Wygrales :(");
    else
        printf("Remis");
    return 0;
}
