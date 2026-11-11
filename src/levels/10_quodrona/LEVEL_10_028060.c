/* LEVEL_10:0x028060 -- copy one block of thirteen floats into the global. */

typedef struct {
    float f[13];
} Block;

extern char D_200000[];
extern Block D_23A340;

void func_028060(int index)
{
    Block *table = *(Block **)((char *)D_200000 - 0x3054);

    D_23A340 = *(Block *)((char *)(table + index) + 0xE8);
}
