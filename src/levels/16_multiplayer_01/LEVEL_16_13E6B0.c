/* LEVEL_16:0x13E6B0 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_1832C8(int unused, char *node);

void func_13E6B0(char *item)
{
    func_1832C8((int)item, *(char **)(item + 0x58));
}
