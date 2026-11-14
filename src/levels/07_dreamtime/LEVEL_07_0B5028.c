/* LEVEL_07:0x0B5028 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_0033D318[];

void func_0B5028(int index)
{
    D_0033D318[index].f00 = 0;
    D_0033D318[index].f04 = 0;
}
