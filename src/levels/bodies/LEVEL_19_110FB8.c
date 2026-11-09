/* LEVEL_19:0x110FB8 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001B5D19;
extern unsigned char D_001B5D1A;
extern int D_002DC620[];
extern unsigned int func_091FB0(void);

unsigned char func_110FB8(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001B5D19 == 0) {
        D_001B5D19 = 1;
        i = 0;
        do {
            value = func_091FB0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002DC620[i] = value;
            i++;
        } while (i < 6);
        D_001B5D1A = 1;
    }
    return D_001B5D1A;
}
