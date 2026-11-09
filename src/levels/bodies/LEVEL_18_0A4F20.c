/* LEVEL_18:0x0A4F20 -- placement copy of LEVEL_16_0A5FA8.c: runs four per-slot helpers for each of two slots of an owner record. */

extern void func_0A52F0(unsigned int slot, char *owner);
extern void func_0A51A8(int index, int input);
extern void func_0A5068(int index, int input);
extern void func_0A70B0(int index, int input);

void func_0A4F20(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A52F0(i, owner);
        func_0A51A8(i, (int)owner);
        func_0A5068(i, (int)owner);
        func_0A70B0(i, (int)owner);
    }
}
