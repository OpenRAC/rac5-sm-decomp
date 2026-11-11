/* LEVEL_17:0x029300 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_00195664;
extern unsigned char D_00195665;
extern float D_001D1920;
extern float D_001D1924;
extern int D_001D1928;
extern float D_001D192C;
extern float D_001D1930;
extern int D_001D1934;
extern float fmodf(float x, float y);
extern void func_0293E8(void);
extern int func_091158(void);

void func_029300(void)
{
    int id;

    if (D_00195664 != 0)
        func_0293E8();
    id = func_091158();
    D_001D1924 = fmodf(D_001D1924, 0.016666999086737633f);
    D_001D1928 = id;
    D_001D192C = 0.033333335f;
    if (D_00195665 != 0) {
        D_00195665 = 0;
        D_001D192C = 0.0f;
    }
    D_001D1924 = D_001D1924 + D_001D192C;
    D_001D1920 = D_001D1920 + D_001D192C;
    D_001D1930 = D_001D192C * 30.0f;
    D_001D1934 = D_001D1934 + 1;
}
