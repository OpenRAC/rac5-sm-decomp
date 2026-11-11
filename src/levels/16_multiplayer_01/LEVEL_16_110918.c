/* LEVEL_16:0x110918 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001B4B99;
extern unsigned char D_001B4B9A;
extern int D_002DC4A0[];
extern unsigned int func_092720(void);

unsigned char func_110918(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001B4B99 == 0) {
        D_001B4B99 = 1;
        i = 0;
        do {
            value = func_092720();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002DC4A0[i] = value;
            i++;
        } while (i < 6);
        D_001B4B9A = 1;
    }
    return D_001B4B9A;
}
