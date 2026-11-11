/* LEVEL_20:0x01E460 -- placement copy of LEVEL_16_021640.c: returns a word of the grid cell the item points at. */
extern char *func_01EDC8(int, int);

int func_01E460(char *item)
{
    char *cell = func_01EDC8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
    return *(int *)(cell + 0x40);
}
