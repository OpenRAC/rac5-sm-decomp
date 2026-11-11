/* LEVEL_03:0x131F70 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0021F709;
extern unsigned char D_0021F70A;
extern int D_003A9480[];
extern unsigned int func_0A3330(void);

unsigned char func_131F70(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0021F709 == 0) {
        D_0021F709 = 1;
        i = 0;
        do {
            value = func_0A3330();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_003A9480[i] = value;
            i++;
        } while (i < 6);
        D_0021F70A = 1;
    }
    return D_0021F70A;
}
