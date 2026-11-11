/* LEVEL_10:0x0812C8 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00244118;
extern Pair D_00244120[];
void func_0812C8(int first, int second)
{
    unsigned int index = D_00244118;
    Pair *slot;
    if (index < 16) {
        slot = &D_00244120[index];
        D_00244118 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
