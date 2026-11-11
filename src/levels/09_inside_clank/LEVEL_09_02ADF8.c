/* LEVEL_09:0x02ADF8 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001DE334;
extern unsigned char D_001DE335;
extern float D_002190A0;
extern float D_002190A4;
extern int D_002190A8;
extern float D_002190AC;
extern float D_002190B0;
extern int D_002190B4;
extern float fmodf(float x, float y);
extern void func_02AED0(void);
extern int func_09FCB0(void);

void func_02ADF8(void)
{
    int id;

    if (D_001DE334 != 0)
        func_02AED0();
    id = func_09FCB0();
    D_002190A4 = fmodf(D_002190A4, 0.016666999086737633f);
    D_002190A8 = id;
    D_002190AC = 0.033333335f;
    if (D_001DE335 != 0) {
        D_001DE335 = 0;
        D_002190AC = 0.0f;
    }
    D_002190A4 = D_002190A4 + D_002190AC;
    D_002190A0 = D_002190A0 + D_002190AC;
    D_002190B0 = D_002190AC * 30.0f;
    D_002190B4 = D_002190B4 + 1;
}
