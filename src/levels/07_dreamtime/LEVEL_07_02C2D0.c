/* LEVEL_07:0x02C2D0 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_00208834;
extern unsigned char D_00208835;
extern float D_00247220;
extern float D_00247224;
extern int D_00247228;
extern float D_0024722C;
extern float D_00247230;
extern int D_00247234;
extern float fmodf(float x, float y);
extern void func_02C3A8(void);
extern int func_0A4A00(void);

void func_02C2D0(void)
{
    int id;

    if (D_00208834 != 0)
        func_02C3A8();
    id = func_0A4A00();
    D_00247224 = fmodf(D_00247224, 0.016666999086737633f);
    D_00247228 = id;
    D_0024722C = 0.033333335f;
    if (D_00208835 != 0) {
        D_00208835 = 0;
        D_0024722C = 0.0f;
    }
    D_00247224 = D_00247224 + D_0024722C;
    D_00247220 = D_00247220 + D_0024722C;
    D_00247230 = D_0024722C * 30.0f;
    D_00247234 = D_00247234 + 1;
}
