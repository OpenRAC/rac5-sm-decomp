/* LEVEL_10:0x131A28 -- placement copy of FRONTEND_021548.c: one-time fill of six table entries. */
extern unsigned char D_0020FCE9;
extern unsigned char D_0020FCEA;
extern int D_00397A00[];
extern unsigned int func_0A46C8(void);

unsigned char func_131A28(void)
{
    unsigned int i;
    unsigned int value;
    if (D_0020FCE9 == 0) {
        D_0020FCE9 = 1;
        i = 0;
        do {
            value = func_0A46C8();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_00397A00[i] = value;
            i++;
        } while (i < 6);
        D_0020FCEA = 1;
    }
    return D_0020FCEA;
}
