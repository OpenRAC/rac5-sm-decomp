/* LEVEL_19:0x11D0F0 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001B96A0[];
extern int D_001B96A8[];

void func_11D0F0(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001B96A8[i] = 0;
        D_001B96A0[i] = 0;
    }
}
