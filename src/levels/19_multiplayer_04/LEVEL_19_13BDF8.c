/* LEVEL_19:0x13BDF8 -- placement copy of LEVEL_16_13F160.c: passes the object and the node embedded in its data block to the node handler. */
extern void func_17FF60(int unused, char *node);

void func_13BDF8(char *item)
{
    func_17FF60((int)item, *(char **)(item + 0x58) + 4);
}
