/* LEVEL_18:0x0A0940 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_002760A8[];

void func_0A0940(int index)
{
    D_002760A8[index].f00 = 0;
    D_002760A8[index].f04 = 0;
}
