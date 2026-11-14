/* LEVEL_16:0x0A1930 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00275D28[];

void func_0A1930(int index)
{
    D_00275D28[index].f00 = 0;
    D_00275D28[index].f04 = 0;
}
