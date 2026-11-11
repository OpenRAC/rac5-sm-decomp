/* LEVEL_17:0x10FE90 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001A8199;
extern unsigned char D_001A819A;
extern int D_002CD7A0[];
extern unsigned int func_091C18(void);

unsigned char func_10FE90(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001A8199 == 0) {
        D_001A8199 = 1;
        i = 0;
        do {
            value = func_091C18();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002CD7A0[i] = value;
            i++;
        } while (i < 6);
        D_001A819A = 1;
    }
    return D_001A819A;
}
