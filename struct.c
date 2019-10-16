#include <stdio.h>
#include <stdlib.h>
#include <header.h>

struct s example(){
    struct s ans;
    struct s* ptr = &ans;
    ptr->a = rand();
    ptr->surname = rand();
    return ans;
}

void printer(struct s player){
    printf("Number: %d\tName: %s\n", player.a, player.surname);
}

void modify(struct s* player, int x, char name[30]){
    player->a = x;
    player->surname = name;
}
