/* LEVEL_05:0x18E820 -- calls a helper for the first two table entries and stores each result in a second table. */

extern int func_1259E0(unsigned int value);
extern unsigned int D_00211DA8[];
extern int D_0038E4A0[];

void func_18E820(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_0038E4A0[i] = func_1259E0(D_00211DA8[i]);
    }
}
