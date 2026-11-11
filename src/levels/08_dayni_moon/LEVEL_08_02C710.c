/* LEVEL_08:0x02C710 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_0023D0B4;
extern unsigned char D_0023D0B5;
extern float D_00280BA0;
extern float D_00280BA4;
extern int D_00280BA8;
extern float D_00280BAC;
extern float D_00280BB0;
extern int D_00280BB4;
extern float fmodf(float x, float y);
extern void func_02C7E8(void);
extern int func_0AD2F8(void);

void func_02C710(void)
{
    int id;

    if (D_0023D0B4 != 0)
        func_02C7E8();
    id = func_0AD2F8();
    D_00280BA4 = fmodf(D_00280BA4, 0.016666999086737633f);
    D_00280BA8 = id;
    D_00280BAC = 0.033333335f;
    if (D_0023D0B5 != 0) {
        D_0023D0B5 = 0;
        D_00280BAC = 0.0f;
    }
    D_00280BA4 = D_00280BA4 + D_00280BAC;
    D_00280BA0 = D_00280BA0 + D_00280BAC;
    D_00280BB0 = D_00280BAC * 30.0f;
    D_00280BB4 = D_00280BB4 + 1;
}
