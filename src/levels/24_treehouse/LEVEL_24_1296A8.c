/* LEVEL_24:0x1296A8 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001D7D09;
extern unsigned char D_001D7D0A;
extern int D_0035A4C0[];
extern unsigned int func_09CE28(void);

unsigned char func_1296A8(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001D7D09 == 0) {
        D_001D7D09 = 1;
        i = 0;
        do {
            value = func_09CE28();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_0035A4C0[i] = value;
            i++;
        } while (i < 6);
        D_001D7D0A = 1;
    }
    return D_001D7D0A;
}
