/* LEVEL_21:0x093890 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_0023FA58[];

void func_093890(int index)
{
    D_0023FA58[index].f00 = 0;
    D_0023FA58[index].f04 = 0;
}
