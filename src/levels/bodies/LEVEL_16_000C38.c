/* LEVEL_16:0x000C38 -- clears or sets a flag byte in each of a fixed set of records, then stores the count. */

extern char D_001DA5E0[];
extern int D_0019ACD0;

void func_000C38(unsigned int n)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < n; i++) {
        D_001DA5E0[0x116 + i * 0x118] = 1;
    }
    for (j = n; j < 2; j++) {
        D_001DA5E0[0x116 + j * 0x118] = 0;
    }
    D_0019ACD0 = n;
}
