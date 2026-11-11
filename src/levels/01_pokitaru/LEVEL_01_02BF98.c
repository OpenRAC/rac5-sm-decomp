/* LEVEL_01:0x02BF98 -- advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001F4534;
extern unsigned char D_001F4535;
extern float D_00231920;
extern float D_00231924;
extern int D_00231928;
extern float D_0023192C;
extern float D_00231930;
extern int D_00231934;
extern float fmodf(float x, float y);
extern void func_02C070(void);
extern int func_0A2A00(void);

void func_02BF98(void)
{
    int id;

    if (D_001F4534 != 0)
        func_02C070();
    id = func_0A2A00();
    D_00231924 = fmodf(D_00231924, 0.016666999086737633f);
    D_00231928 = id;
    D_0023192C = 0.033333335f;
    if (D_001F4535 != 0) {
        D_001F4535 = 0;
        D_0023192C = 0.0f;
    }
    D_00231924 = D_00231924 + D_0023192C;
    D_00231920 = D_00231920 + D_0023192C;
    D_00231930 = D_0023192C * 30.0f;
    D_00231934 = D_00231934 + 1;
}
