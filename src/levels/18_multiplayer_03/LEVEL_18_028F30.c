/* LEVEL_18:0x028F30 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001A34E4;
extern unsigned char D_001A34E5;
extern float D_001E09A0;
extern float D_001E09A4;
extern int D_001E09A8;
extern float D_001E09AC;
extern float D_001E09B0;
extern int D_001E09B4;
extern float fmodf(float x, float y);
extern void func_029018(void);
extern int func_090C70(void);

void func_028F30(void)
{
    int id;

    if (D_001A34E4 != 0)
        func_029018();
    id = func_090C70();
    D_001E09A4 = fmodf(D_001E09A4, 0.016666999086737633f);
    D_001E09A8 = id;
    D_001E09AC = 0.033333335f;
    if (D_001A34E5 != 0) {
        D_001A34E5 = 0;
        D_001E09AC = 0.0f;
    }
    D_001E09A4 = D_001E09A4 + D_001E09AC;
    D_001E09A0 = D_001E09A0 + D_001E09AC;
    D_001E09B0 = D_001E09AC * 30.0f;
    D_001E09B4 = D_001E09B4 + 1;
}
