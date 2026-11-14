/* LEVEL_06:0x0AD808 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00314798[];

void func_0AD808(int index)
{
    D_00314798[index].f00 = 0;
    D_00314798[index].f04 = 0;
}
