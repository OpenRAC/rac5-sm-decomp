/* LEVEL_09:0x12CB40 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001F0B89;
extern unsigned char D_001F0B8A;
extern int D_00375D80[];
extern unsigned int func_0A0860(void);

unsigned char func_12CB40(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001F0B89 == 0) {
        D_001F0B89 = 1;
        i = 0;
        do {
            value = func_0A0860();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_00375D80[i] = value;
            i++;
        } while (i < 6);
        D_001F0B8A = 1;
    }
    return D_001F0B8A;
}
