/* LEVEL_16:0x021640 -- returns a word of the grid cell the item points at. */
extern char *func_0220C8(int, int);

int func_021640(char *item)
{
    char *cell = func_0220C8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
    return *(int *)(cell + 0x40);
}
