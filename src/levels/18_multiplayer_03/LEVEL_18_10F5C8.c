/* LEVEL_18:0x10F5C8 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001B6019;
extern unsigned char D_001B601A;
extern int D_002DC820[];
extern unsigned int func_091730(void);

unsigned char func_10F5C8(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001B6019 == 0) {
        D_001B6019 = 1;
        i = 0;
        do {
            value = func_091730();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002DC820[i] = value;
            i++;
        } while (i < 6);
        D_001B601A = 1;
    }
    return D_001B601A;
}
