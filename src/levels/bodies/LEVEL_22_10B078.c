/* LEVEL_22:0x10B078 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_00166069;
extern unsigned char D_0016606A;
extern int D_002E40E0[];
extern unsigned int func_091BC0(void);

unsigned char func_10B078(void)
{
    unsigned int i;
    unsigned int value;
    if (D_00166069 == 0) {
        D_00166069 = 1;
        i = 0;
        do {
            value = func_091BC0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002E40E0[i] = value;
            i++;
        } while (i < 6);
        D_0016606A = 1;
    }
    return D_0016606A;
}
