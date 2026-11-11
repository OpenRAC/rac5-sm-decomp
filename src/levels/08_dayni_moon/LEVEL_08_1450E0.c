/* LEVEL_08:0x1450E0 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0024FF49;
extern unsigned char D_0024FF4A;
extern int D_003DD880[];
extern unsigned int func_0ADEA8(void);

unsigned char func_1450E0(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0024FF49 == 0) {
        D_0024FF49 = 1;
        i = 0;
        do {
            value = func_0ADEA8();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_003DD880[i] = value;
            i++;
        } while (i < 6);
        D_0024FF4A = 1;
    }
    return D_0024FF4A;
}
