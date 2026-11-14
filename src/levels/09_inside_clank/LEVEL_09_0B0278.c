/* LEVEL_09:0x0B0278 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_0030F198[];

void func_0B0278(int index)
{
    D_0030F198[index].f00 = 0;
    D_0030F198[index].f04 = 0;
}
