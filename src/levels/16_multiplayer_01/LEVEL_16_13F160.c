/* LEVEL_16:0x13F160 -- passes the object and the node embedded in its data block to the node handler. */
extern void func_1832C8(int unused, char *node);

void func_13F160(char *item)
{
    func_1832C8((int)item, *(char **)(item + 0x58) + 4);
}
