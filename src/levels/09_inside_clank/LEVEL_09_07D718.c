/* LEVEL_09:0x07D718 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00222498;
extern Pair D_002224A0[];
void func_07D718(int first, int second)
{
    unsigned int index = D_00222498;
    Pair *slot;
    if (index < 16) {
        slot = &D_002224A0[index];
        D_00222498 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
