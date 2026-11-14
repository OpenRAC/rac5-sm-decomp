/* LEVEL_07:0x15C618 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_1D6BC0(int unused, char *node);

void func_15C618(char *item)
{
    func_1D6BC0((int)item, *(char **)(item + 0x58));
}
