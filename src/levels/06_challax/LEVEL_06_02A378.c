/* LEVEL_06:0x02A378 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001E3434;
extern unsigned char D_001E3435;
extern float D_0021E6A0;
extern float D_0021E6A4;
extern int D_0021E6A8;
extern float D_0021E6AC;
extern float D_0021E6B0;
extern int D_0021E6B4;
extern float fmodf(float x, float y);
extern void func_02A450(void);
extern int func_09D1D0(void);

void func_02A378(void)
{
    int id;

    if (D_001E3434 != 0)
        func_02A450();
    id = func_09D1D0();
    D_0021E6A4 = fmodf(D_0021E6A4, 0.016666999086737633f);
    D_0021E6A8 = id;
    D_0021E6AC = 0.033333335f;
    if (D_001E3435 != 0) {
        D_001E3435 = 0;
        D_0021E6AC = 0.0f;
    }
    D_0021E6A4 = D_0021E6A4 + D_0021E6AC;
    D_0021E6A0 = D_0021E6A0 + D_0021E6AC;
    D_0021E6B0 = D_0021E6AC * 30.0f;
    D_0021E6B4 = D_0021E6B4 + 1;
}
