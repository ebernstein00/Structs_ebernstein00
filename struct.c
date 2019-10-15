#include <stdio.h>
#include <stdlib.h>
#include <header.h>



int printer(struct player player){
    printf("Number: %d\tName: %s\n", player.a, player.surname);
    return 1;
}

struct player modify(struct player player, int x, char name[30]){
    player.a = x;
    player.surname = name;
    return player;
}
