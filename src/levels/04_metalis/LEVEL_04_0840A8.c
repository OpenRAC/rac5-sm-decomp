/* LEVEL_04:0x0840A8 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00255528;
extern Pair D_00255530[];
void func_0840A8(int first, int second)
{
    unsigned int index = D_00255528;
    Pair *slot;
    if (index < 16) {
        slot = &D_00255530[index];
        D_00255528 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
