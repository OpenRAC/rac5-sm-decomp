/* LEVEL_02:0x0B98D8 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_0033EF18[];

void func_0B98D8(int index)
{
    D_0033EF18[index].f00 = 0;
    D_0033EF18[index].f04 = 0;
}
