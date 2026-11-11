/* LEVEL_17:0x13AB70 -- placement copy of LEVEL_16_13F160.c: passes the object and the node embedded in its data block to the node handler. */
extern void func_176910(int unused, char *node);

void func_13AB70(char *item)
{
    func_176910((int)item, *(char **)(item + 0x58) + 4);
}
