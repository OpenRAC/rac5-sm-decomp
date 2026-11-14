/* LEVEL_08:0x0BDD70 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00376C98[];

void func_0BDD70(int index)
{
    D_00376C98[index].f00 = 0;
    D_00376C98[index].f04 = 0;
}
