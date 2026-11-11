/* LEVEL_22:0x026528 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001538B4;
extern unsigned char D_001538B5;
extern float D_00183520;
extern float D_00183524;
extern int D_00183528;
extern float D_0018352C;
extern float D_00183530;
extern int D_00183534;
extern float fmodf(float x, float y);
extern void func_026600(void);
extern int func_091010(void);

void func_026528(void)
{
    int id;

    if (D_001538B4 != 0)
        func_026600();
    id = func_091010();
    D_00183524 = fmodf(D_00183524, 0.016666999086737633f);
    D_00183528 = id;
    D_0018352C = 0.033333335f;
    if (D_001538B5 != 0) {
        D_001538B5 = 0;
        D_0018352C = 0.0f;
    }
    D_00183524 = D_00183524 + D_0018352C;
    D_00183520 = D_00183520 + D_0018352C;
    D_00183530 = D_0018352C * 30.0f;
    D_00183534 = D_00183534 + 1;
}
