/* LEVEL_17:0x13A5B0 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_176910(int unused, char *node);

void func_13A5B0(char *item)
{
    func_176910((int)item, *(char **)(item + 0x58));
}
