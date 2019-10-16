#include <stdio.h>
#include <stdlib.h>
#include "header.h"

struct s {
    int a;
    char surname[30];
};

int main(){
    struct s player = example();
    struct s* player_ptr = &player;
    printf("An example of my struct is:\n");
    printer(player);
    printf("\nThis can be changed using the modify() method\n");
    modify(player_ptr, 20, "Alonso");
    printer(player);
    printf("\nThe struct now shows Pete Alonso's uniform number\n");
}
