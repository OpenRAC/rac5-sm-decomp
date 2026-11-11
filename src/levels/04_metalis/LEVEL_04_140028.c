/* LEVEL_04:0x140028 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_002204A9;
extern unsigned char D_002204AA;
extern int D_003A8E00[];
extern unsigned int func_0A87C0(void);

unsigned char func_140028(void)
{
    unsigned int i;
    unsigned int value;
    if (D_002204A9 == 0) {
        D_002204A9 = 1;
        i = 0;
        do {
            value = func_0A87C0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_003A8E00[i] = value;
            i++;
        } while (i < 6);
        D_002204AA = 1;
    }
    return D_002204AA;
}
