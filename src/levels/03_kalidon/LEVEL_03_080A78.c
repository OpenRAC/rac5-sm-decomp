/* LEVEL_03:0x080A78 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00255B98;
extern Pair D_00255BA0[];
void func_080A78(int first, int second)
{
    unsigned int index = D_00255B98;
    Pair *slot;
    if (index < 16) {
        slot = &D_00255BA0[index];
        D_00255B98 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
