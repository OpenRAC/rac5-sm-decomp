/* LEVEL_10:0x158078 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_1CE888(int unused, char *node);

void func_158078(char *item)
{
    func_1CE888((int)item, *(char **)(item + 0x58));
}
