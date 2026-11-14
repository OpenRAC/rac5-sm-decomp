/* LEVEL_03:0x158D68 -- unlinks the node stored at offset 0x58 of the item. */
extern void func_1DB200(int unused, char *node);

void func_158D68(char *item)
{
    func_1DB200((int)item, *(char **)(item + 0x58));
}
