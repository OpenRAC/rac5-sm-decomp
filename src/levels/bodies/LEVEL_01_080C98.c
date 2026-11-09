/* LEVEL_01:0x080C98 -- appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_0023AD18;
extern Pair D_0023AD20[];
void func_080C98(int first, int second)
{
    unsigned int index = D_0023AD18;
    Pair *slot;
    if (index < 16) {
        slot = &D_0023AD20[index];
        D_0023AD18 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
