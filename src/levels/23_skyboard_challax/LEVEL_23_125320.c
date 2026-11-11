/* LEVEL_23:0x125320 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001DA489;
extern unsigned char D_001DA48A;
extern int D_0035FB40[];
extern unsigned int func_09A2F0(void);

unsigned char func_125320(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001DA489 == 0) {
        D_001DA489 = 1;
        i = 0;
        do {
            value = func_09A2F0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_0035FB40[i] = value;
            i++;
        } while (i < 6);
        D_001DA48A = 1;
    }
    return D_001DA48A;
}
