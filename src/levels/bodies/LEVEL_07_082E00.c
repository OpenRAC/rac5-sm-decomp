/* LEVEL_07:0x082E00 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00250618;
extern Pair D_00250620[];
void func_082E00(int first, int second)
{
    unsigned int index = D_00250618;
    Pair *slot;
    if (index < 16) {
        slot = &D_00250620[index];
        D_00250618 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
