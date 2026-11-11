/* LEVEL_05:0x12F520 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001F6109;
extern unsigned char D_001F610A;
extern int D_0037A4C0[];
extern unsigned int func_0A1B70(void);

unsigned char func_12F520(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001F6109 == 0) {
        D_001F6109 = 1;
        i = 0;
        do {
            value = func_0A1B70();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_0037A4C0[i] = value;
            i++;
        } while (i < 6);
        D_001F610A = 1;
    }
    return D_001F610A;
}
