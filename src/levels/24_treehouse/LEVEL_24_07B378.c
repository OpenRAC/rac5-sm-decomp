/* LEVEL_24:0x07B378 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00206C18;
extern Pair D_00206C20[];
void func_07B378(int first, int second)
{
    unsigned int index = D_00206C18;
    Pair *slot;
    if (index < 16) {
        slot = &D_00206C20[index];
        D_00206C18 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
