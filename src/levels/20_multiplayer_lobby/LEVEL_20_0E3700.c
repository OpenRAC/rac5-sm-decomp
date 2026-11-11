/* LEVEL_20:0x0E3700 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_00117259;
extern unsigned char D_0011725A;
extern int D_001FFA00[];
extern unsigned int func_07CE18(void);

unsigned char func_0E3700(void)
{
    unsigned int i;
    unsigned int value;
    if (D_00117259 == 0) {
        D_00117259 = 1;
        i = 0;
        do {
            value = func_07CE18();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_001FFA00[i] = value;
            i++;
        } while (i < 6);
        D_0011725A = 1;
    }
    return D_0011725A;
}
