/* LEVEL_15:0x025708 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001491B4;
extern unsigned char D_001491B5;
extern float D_00179AA0;
extern float D_00179AA4;
extern int D_00179AA8;
extern float D_00179AAC;
extern float D_00179AB0;
extern int D_00179AB4;
extern float fmodf(float x, float y);
extern void func_0257E0(void);
extern int func_0832F8(void);

void func_025708(void)
{
    int id;

    if (D_001491B4 != 0)
        func_0257E0();
    id = func_0832F8();
    D_00179AA4 = fmodf(D_00179AA4, 0.016666999086737633f);
    D_00179AA8 = id;
    D_00179AAC = 0.033333335f;
    if (D_001491B5 != 0) {
        D_001491B5 = 0;
        D_00179AAC = 0.0f;
    }
    D_00179AA4 = D_00179AA4 + D_00179AAC;
    D_00179AA0 = D_00179AA0 + D_00179AAC;
    D_00179AB0 = D_00179AAC * 30.0f;
    D_00179AB4 = D_00179AB4 + 1;
}
