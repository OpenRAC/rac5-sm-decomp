/* LEVEL_18:0x13AA50 -- placement copy of LEVEL_16_13F160.c: passes the object and the node embedded in its data block to the node handler. */
extern void func_183900(int unused, char *node);

void func_13AA50(char *item)
{
    func_183900((int)item, *(char **)(item + 0x58) + 4);
}
