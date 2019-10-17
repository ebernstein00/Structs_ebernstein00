#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "header.h"

struct s {
    int a;
    char* surname;
};

struct s example(){
    struct s ans;
    struct s* ptr = &ans;
    ptr->a = rand();
    strcpy(ptr->surname, "Placeholder");
    return ans;
}

void printer(struct s player){
    printf("Number: %d\tName: %s\n", player.a, player.surname);
}

void modify(struct s* player, int x, char* name){
    player->a = x;
    strcpy(player->surname, name);
}
