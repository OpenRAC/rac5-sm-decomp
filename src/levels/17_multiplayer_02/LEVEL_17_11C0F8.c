/* LEVEL_17:0x11C0F8 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001ABB20[];
extern int D_001ABB28[];

void func_11C0F8(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001ABB28[i] = 0;
        D_001ABB20[i] = 0;
    }
}
