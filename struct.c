#include <stdio.h>
#include <stdlib.h>
#include <header.h>

struct s example(){
    struct s ans;
    (*ans).a = rand();
    (*ans).surname = rand();
    return ans;
}

int printer(struct s player){
    printf("Number: %d\tName: %s\n", player.a, player.surname);
    return 1;
}

void modify(struct s* player, int x, char name[30]){
    player->a = x;
    player->surname = name;
}
