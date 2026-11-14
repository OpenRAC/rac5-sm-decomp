/* LEVEL_08:0x1709A0 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_2053E8(int unused, char *node);

void func_1709A0(char *item)
{
    func_2053E8((int)item, *(char **)(item + 0x58));
}
