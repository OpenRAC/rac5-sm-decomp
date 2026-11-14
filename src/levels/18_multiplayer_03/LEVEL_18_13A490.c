/* LEVEL_18:0x13A490 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_183900(int unused, char *node);

void func_13A490(char *item)
{
    func_183900((int)item, *(char **)(item + 0x58));
}
