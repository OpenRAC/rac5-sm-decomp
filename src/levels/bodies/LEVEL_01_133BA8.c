/* LEVEL_01:0x133BA8 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_00207089;
extern unsigned char D_0020708A;
extern int D_0038E600[];
extern unsigned int func_0A35B0(void);

unsigned char func_133BA8(void)
{
    unsigned int i;
    unsigned int value;
    if (D_00207089 == 0) {
        D_00207089 = 1;
        i = 0;
        do {
            value = func_0A35B0();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_0038E600[i] = value;
            i++;
        } while (i < 6);
        D_0020708A = 1;
    }
    return D_0020708A;
}
