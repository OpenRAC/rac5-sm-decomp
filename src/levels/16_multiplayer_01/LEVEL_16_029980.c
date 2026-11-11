/* LEVEL_16:0x029980 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001A2064;
extern unsigned char D_001A2065;
extern float D_001E0620;
extern float D_001E0624;
extern int D_001E0628;
extern float D_001E062C;
extern float D_001E0630;
extern int D_001E0634;
extern float fmodf(float x, float y);
extern void func_029A68(void);
extern int func_091C60(void);

void func_029980(void)
{
    int id;

    if (D_001A2064 != 0)
        func_029A68();
    id = func_091C60();
    D_001E0624 = fmodf(D_001E0624, 0.016666999086737633f);
    D_001E0628 = id;
    D_001E062C = 0.033333335f;
    if (D_001A2065 != 0) {
        D_001A2065 = 0;
        D_001E062C = 0.0f;
    }
    D_001E0624 = D_001E0624 + D_001E062C;
    D_001E0620 = D_001E0620 + D_001E062C;
    D_001E0630 = D_001E062C * 30.0f;
    D_001E0634 = D_001E0634 + 1;
}
