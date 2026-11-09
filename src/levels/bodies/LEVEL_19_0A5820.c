/* LEVEL_19:0x0A5820 -- placement copy of LEVEL_16_0A5FA8.c: runs four per-slot helpers for each of two slots of an owner record. */

extern void func_0A5BF0(unsigned int slot, char *owner);
extern void func_0A5AA8(int index, int input);
extern void func_0A5968(int index, int input);
extern void func_0A79B0(int index, int input);

void func_0A5820(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5BF0(i, owner);
        func_0A5AA8(i, (int)owner);
        func_0A5968(i, (int)owner);
        func_0A79B0(i, (int)owner);
    }
}
