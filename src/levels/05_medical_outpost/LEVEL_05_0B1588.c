/* LEVEL_05:0x0B1588 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_003138D8[];

void func_0B1588(int index)
{
    D_003138D8[index].f00 = 0;
    D_003138D8[index].f04 = 0;
}
