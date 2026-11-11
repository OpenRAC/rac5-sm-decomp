/* LEVEL_05:0x07E338 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00226BD8;
extern Pair D_00226BE0[];
void func_07E338(int first, int second)
{
    unsigned int index = D_00226BD8;
    Pair *slot;
    if (index < 16) {
        slot = &D_00226BE0[index];
        D_00226BD8 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
