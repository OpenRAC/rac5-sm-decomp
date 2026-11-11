/* LEVEL_17:0x020FC0 -- placement copy of LEVEL_16_021640.c: returns a word of the grid cell the item points at. */
extern char *func_021A48(int, int);

int func_020FC0(char *item)
{
    char *cell = func_021A48(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
    return *(int *)(cell + 0x40);
}
