/* LEVEL_10:0x02BE20 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001FD534;
extern unsigned char D_001FD535;
extern float D_0023AD20;
extern float D_0023AD24;
extern int D_0023AD28;
extern float D_0023AD2C;
extern float D_0023AD30;
extern int D_0023AD34;
extern float fmodf(float x, float y);
extern void func_02BEF8(void);
extern int func_0A3B18(void);

void func_02BE20(void)
{
    int id;

    if (D_001FD534 != 0)
        func_02BEF8();
    id = func_0A3B18();
    D_0023AD24 = fmodf(D_0023AD24, 0.016666999086737633f);
    D_0023AD28 = id;
    D_0023AD2C = 0.033333335f;
    if (D_001FD535 != 0) {
        D_001FD535 = 0;
        D_0023AD2C = 0.0f;
    }
    D_0023AD24 = D_0023AD24 + D_0023AD2C;
    D_0023AD20 = D_0023AD20 + D_0023AD2C;
    D_0023AD30 = D_0023AD2C * 30.0f;
    D_0023AD34 = D_0023AD34 + 1;
}
