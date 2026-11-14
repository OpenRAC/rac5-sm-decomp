/* LEVEL_04:0x16DA98 -- placement copy of LEVEL_03_158D68.c: unlinks the node stored at offset 0x58 of the item. */
extern void func_1DE470(int unused, char *node);

void func_16DA98(char *item)
{
    func_1DE470((int)item, *(char **)(item + 0x58));
}
