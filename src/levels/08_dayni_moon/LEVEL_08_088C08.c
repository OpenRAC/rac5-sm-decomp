/* LEVEL_08:0x088C08 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00289FA8;
extern Pair D_00289FB0[];
void func_088C08(int first, int second)
{
    unsigned int index = D_00289FA8;
    Pair *slot;
    if (index < 16) {
        slot = &D_00289FB0[index];
        D_00289FA8 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
