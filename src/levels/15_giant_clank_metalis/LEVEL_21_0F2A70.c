/* LEVEL_21:0x0F2A70 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0015B9E9;
extern unsigned char D_0015B9EA;
extern int D_002A5980[];
extern unsigned int func_083EA8(void);

unsigned char func_0F2A70(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0015B9E9 == 0) {
        D_0015B9E9 = 1;
        i = 0;
        do {
            value = func_083EA8();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_002A5980[i] = value;
            i++;
        } while (i < 6);
        D_0015B9EA = 1;
    }
    return D_0015B9EA;
}
