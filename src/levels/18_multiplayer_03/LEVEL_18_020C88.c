/* LEVEL_18:0x020C88 -- placement copy of LEVEL_16_021640.c: returns a word of the grid cell the item points at. */
extern char *func_021710(int, int);

int func_020C88(char *item)
{
    char *cell = func_021710(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
    return *(int *)(cell + 0x40);
}
