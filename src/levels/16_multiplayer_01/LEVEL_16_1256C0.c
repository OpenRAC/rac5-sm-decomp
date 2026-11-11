/* LEVEL_16:0x1256C0 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001BD4C8[];
extern int D_001BD4C0[];

void func_1256C0(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001BD4C0[i] = 0;
        D_001BD4C8[i] = 0;
    }
}
