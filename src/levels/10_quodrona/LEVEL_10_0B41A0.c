/* LEVEL_10:0x0B41A0 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00330E18[];

void func_0B41A0(int index)
{
    D_00330E18[index].f00 = 0;
    D_00330E18[index].f04 = 0;
}
