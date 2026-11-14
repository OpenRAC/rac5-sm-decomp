/* LEVEL_22:0x0A1648 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_0027D5E8[];

void func_0A1648(int index)
{
    D_0027D5E8[index].f00 = 0;
    D_0027D5E8[index].f04 = 0;
}
