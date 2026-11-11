/* FRONTEND:0x021548 -- one-time fill of six table entries. */
extern unsigned char D_00032851;
extern unsigned char D_00032852;
extern int D_001EC1D0[];
extern unsigned int func_0083B8(void);

unsigned char func_021548(void)
{
    unsigned int i;
    unsigned int value;
    if (D_00032851 == 0) {
        D_00032851 = 1;
        i = 0;
        do {
            value = func_0083B8();
            if (value == 0xFFFFFFFFu)
                return 0;
            D_001EC1D0[i] = value;
            i++;
        } while (i < 6);
        D_00032852 = 1;
    }
    return D_00032852;
}
