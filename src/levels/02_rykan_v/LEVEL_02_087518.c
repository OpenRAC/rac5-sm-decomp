/* LEVEL_02:0x087518 -- placement copy of LEVEL_01_080C98.c: appends a pair to a 16-slot table and bumps the global count. */
typedef struct { int first; int second; } Pair;
extern unsigned int D_00252228;
extern Pair D_00252230[];
void func_087518(int first, int second)
{
    unsigned int index = D_00252228;
    Pair *slot;
    if (index < 16) {
        slot = &D_00252230[index];
        D_00252228 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
