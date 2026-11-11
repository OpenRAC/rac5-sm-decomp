/* LEVEL_20:0x0EEB28 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_0011ABC8[];
extern int D_0011ABD0[];

void func_0EEB28(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_0011ABD0[i] = 0;
        D_0011ABC8[i] = 0;
    }
}
