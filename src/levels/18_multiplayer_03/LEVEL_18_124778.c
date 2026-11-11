/* LEVEL_18:0x124778 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_001BE948[];
extern int D_001BE940[];

void func_124778(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_001BE940[i] = 0;
        D_001BE948[i] = 0;
    }
}
