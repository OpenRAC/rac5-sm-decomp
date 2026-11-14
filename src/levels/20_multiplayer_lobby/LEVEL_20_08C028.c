/* LEVEL_20:0x08C028 -- placement copy of LEVEL_01_0B2FC8.c: clears the first two words of one table entry. */
typedef struct Entry {
    int f00;
    int f04;
    char pad08[0x18];
} Entry;

extern Entry D_00199568[];

void func_08C028(int index)
{
    D_00199568[index].f00 = 0;
    D_00199568[index].f04 = 0;
}
