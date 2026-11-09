/* LEVEL_06:0x12A278 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_001F5C89;
extern unsigned char D_001F5C8A;
extern int D_0037B380[];
extern unsigned int func_09DD80(void);

unsigned char func_12A278(void)
{
    unsigned int i;
    unsigned int value;
    if (D_001F5C89 == 0) {
        D_001F5C89 = 1;
        i = 0;
        do {
            value = func_09DD80();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_0037B380[i] = value;
            i++;
        } while (i < 6);
        D_001F5C8A = 1;
    }
    return D_001F5C8A;
}
