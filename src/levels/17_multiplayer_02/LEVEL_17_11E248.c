/* LEVEL_17:0x11E248 -- placement copy of LEVEL_16_11E820.c: refreshes three status bytes from input words (the inverted top bit, then two nonzero tests) and sets a mode word to 4 when func_11EE78 reports a nonzero result, else 0. */
extern unsigned int D_001AF180;
extern int D_001AF184;
extern int D_001AF188;
extern unsigned char D_001ADCDC;
extern unsigned char D_001ADDC4;
extern unsigned char D_001ADEAC;
extern int D_002D2938;

extern int func_11EEB8(void);
extern int func_11EE78(void);

void func_11E248(void)
{
    func_11EEB8();
    D_001ADDC4 = ~D_001AF180 >> 31;
    D_001ADCDC = D_001AF188 != 0;
    D_001ADEAC = D_001AF184 != 0;
    if (func_11EE78() == 0)
        D_002D2938 = 0;
    else
        D_002D2938 = 4;
}
