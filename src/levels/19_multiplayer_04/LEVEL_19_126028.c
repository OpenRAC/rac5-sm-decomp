/* LEVEL_19:0x126028 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001BE640[];
extern int D_001BE638[];

void func_126028(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001BE638[i] = 0;
        D_001BE640[i] = 0;
    }
}
