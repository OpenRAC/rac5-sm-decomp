/* LEVEL_07:0x136BA8 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0021B389;
extern unsigned char D_0021B38A;
extern int D_003A3F00[];
extern unsigned int func_0A55B0(void);

unsigned char func_136BA8(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0021B389 == 0) {
        D_0021B389 = 1;
        i = 0;
        do {
            value = func_0A55B0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_003A3F00[i] = value;
            i++;
        } while (i < 6);
        D_0021B38A = 1;
    }
    return D_0021B38A;
}
