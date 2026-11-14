/* LEVEL_01:0x0B2FC8 -- clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00327A18[];

void func_0B2FC8(int index)
{
    D_00327A18[index].f00 = 0;
    D_00327A18[index].f04 = 0;
}
