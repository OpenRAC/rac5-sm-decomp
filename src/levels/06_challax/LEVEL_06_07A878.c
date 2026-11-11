/* LEVEL_06:0x07A878 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00227A98;
extern Pair D_00227AA0[];
void func_07A878(int first, int second)
{
    unsigned int index = D_00227A98;
    Pair *slot;
    if (index < 16) {
        slot = &D_00227AA0[index];
        D_00227A98 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
