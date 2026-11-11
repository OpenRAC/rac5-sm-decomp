/* LEVEL_15:0x065748 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00182D80;
extern Pair D_00182D88[];
void func_065748(int first, int second)
{
    unsigned int index = D_00182D80;
    Pair *slot;
    if (index < 16) {
        slot = &D_00182D88[index];
        D_00182D80 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
