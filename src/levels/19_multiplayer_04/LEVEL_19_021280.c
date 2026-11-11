/* LEVEL_19:0x021280 -- placement copy of LEVEL_16_021640.c: returns a word of the grid cell the item points at. */
extern char *func_021D08(int, int);

int func_021280(char *item)
{
    char *cell = func_021D08(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
    return *(int *)(cell + 0x40);
}
