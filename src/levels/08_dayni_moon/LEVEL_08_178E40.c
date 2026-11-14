/* LEVEL_08:0x178E40 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_2053E8(int unused, char *node);

void func_178E40(char *item)
{
    func_2053E8((int)item, *(char **)(item + 0x58));
}
