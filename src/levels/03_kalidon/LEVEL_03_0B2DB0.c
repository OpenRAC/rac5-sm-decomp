/* LEVEL_03:0x0B2DB0 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_003428A8[];

void func_0B2DB0(int index)
{
    D_003428A8[index].f00 = 0;
    D_003428A8[index].f04 = 0;
}
