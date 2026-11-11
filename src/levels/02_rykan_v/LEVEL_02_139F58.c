/* LEVEL_02:0x139F58 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0021C049;
extern unsigned char D_0021C04A;
extern int D_003A5B00[];
extern unsigned int func_0A9EC0(void);

unsigned char func_139F58(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0021C049 == 0) {
        D_0021C049 = 1;
        i = 0;
        do {
            value = func_0A9EC0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_003A5B00[i] = value;
            i++;
        } while (i < 6);
        D_0021C04A = 1;
    }
    return D_0021C04A;
}
