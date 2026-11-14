/* LEVEL_19:0x0A11C0 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00275EA8[];

void func_0A11C0(int index)
{
    D_00275EA8[index].f00 = 0;
    D_00275EA8[index].f04 = 0;
}
