#include <stdio.h>
#include <stdlib.h>

struct {int a; char surname[30];} player;

int printer(struct {int a; char surname[30];} player){
    printf("Number: %d\tName: %s", player.a, player.surname);
    return 1;
}
