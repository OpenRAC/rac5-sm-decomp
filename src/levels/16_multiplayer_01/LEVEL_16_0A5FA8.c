/* LEVEL_16:0x0A5FA8 -- runs four per-slot helpers for each of two slots of an owner record. */

extern void func_0A6358(unsigned int slot, char *owner);
extern void func_0A6230(int index, int input);
extern void func_0A60F0(int index, int input);
extern void func_0A80D8(int index, int input);

void func_0A5FA8(char *owner)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A6358(i, owner);
        func_0A6230(i, (int)owner);
        func_0A60F0(i, (int)owner);
        func_0A80D8(i, (int)owner);
    }
}
