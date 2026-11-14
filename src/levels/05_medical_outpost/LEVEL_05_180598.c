/* LEVEL_05:0x180598 -- builds three values from a table of kinds with func_126B40 and stores them in a second table. */
extern unsigned int D_00210BC8[];
extern int D_00383610[];
extern int func_126B40(unsigned int kind, int count);

void func_180598(void)
{
    unsigned int i;

    for (i = 0; i < 3; i++)
        D_00383610[i] = func_126B40(D_00210BC8[i], 8);
}
