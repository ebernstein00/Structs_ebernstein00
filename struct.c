#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "header.h"

struct s {
    int a;
    char surname[30];
};

struct s example(){
    struct s ans;
    struct s* ptr = &ans;
    ptr->a = srand(time(0));
    strcpy(ptr->surname, "Placeholder");
    return ans;
}

void printer(struct s player){
    printf("Number: %d\tName: %s\n", player.a, player.surname);
}

void modify(struct s* player, int x, char name[30]){
    player->a = x;
    strcpy(player->surname, name);
}
