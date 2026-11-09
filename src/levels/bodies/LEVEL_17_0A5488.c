/* LEVEL_17:0x0A5488 -- placement copy of LEVEL_16_0A5FA8.c: runs four per-slot helpers for each of two slots of an owner record. */

extern void func_0A5858(unsigned int slot, char *owner);
extern void func_0A5710(int index, int input);
extern void func_0A55D0(int index, int input);
extern void func_0A7618(int index, int input);

void func_0A5488(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5858(i, owner);
        func_0A5710(i, (int)owner);
        func_0A55D0(i, (int)owner);
        func_0A7618(i, (int)owner);
    }
}
