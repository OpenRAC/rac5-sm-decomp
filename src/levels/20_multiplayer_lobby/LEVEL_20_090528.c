/* LEVEL_20:0x090528 -- placement copy of LEVEL_16_0A5FA8.c: runs four per-slot helpers for each of two slots of an owner record. */

extern void func_0908D8(unsigned int slot, char *owner);
extern void func_0907B0(int index, int input);
extern void func_090670(int index, int input);
extern void func_092608(int index, int input);

void func_090528(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0908D8(i, owner);
        func_0907B0(i, (int)owner);
        func_090670(i, (int)owner);
        func_092608(i, (int)owner);
    }
}
