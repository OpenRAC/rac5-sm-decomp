/* LEVEL_20:0x000BF8 -- placement copy of LEVEL_16_000C38.c: clears or sets a flag byte in each of a fixed set of records, then stores the count. */

extern char D_00131F60[];
extern int D_000FD3B8;

void func_000BF8(unsigned int n)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < n; i++) {
        D_00131F60[0x116 + i * 0x118] = 1;
    }
    for (j = n; j < 2; j++) {
        D_00131F60[0x116 + j * 0x118] = 0;
    }
    D_000FD3B8 = n;
}
