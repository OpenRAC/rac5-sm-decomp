/* LEVEL_19:0x13AC90 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_17FF60(int unused, char *node);

void func_13AC90(char *item)
{
    func_17FF60((int)item, *(char **)(item + 0x58));
}
