/* LEVEL_02:0x02C758 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_002091B4;
extern unsigned char D_002091B5;
extern float D_00248E20;
extern float D_00248E24;
extern int D_00248E28;
extern float D_00248E2C;
extern float D_00248E30;
extern int D_00248E34;
extern float fmodf(float x, float y);
extern void func_02C830(void);
extern int func_0A9310(void);

void func_02C758(void)
{
    int id;

    if (D_002091B4 != 0)
        func_02C830();
    id = func_0A9310();
    D_00248E24 = fmodf(D_00248E24, 0.016666999086737633f);
    D_00248E28 = id;
    D_00248E2C = 0.033333335f;
    if (D_002091B5 != 0) {
        D_002091B5 = 0;
        D_00248E2C = 0.0f;
    }
    D_00248E24 = D_00248E24 + D_00248E2C;
    D_00248E20 = D_00248E20 + D_00248E2C;
    D_00248E30 = D_00248E2C * 30.0f;
    D_00248E34 = D_00248E34 + 1;
}
