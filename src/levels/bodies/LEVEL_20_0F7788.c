/* LEVEL_20:0x0F7788 -- placement copy of LEVEL_16_11C780.c. */
/* LEVEL:0x11C780 -- clears two consecutive word globals in a pair. */
extern int D_0011FB68[];
extern int D_0011FB60[];

void func_0F7788(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        D_0011FB60[i] = 0;
        D_0011FB68[i] = 0;
    }
}
