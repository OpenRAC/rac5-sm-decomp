/* LEVEL_05:0x02AC50 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001E38B4;
extern unsigned char D_001E38B5;
extern float D_0021D620;
extern float D_0021D624;
extern int D_0021D628;
extern float D_0021D62C;
extern float D_0021D630;
extern int D_0021D634;
extern float fmodf(float x, float y);
extern void func_02AD28(void);
extern int func_0A0FC0(void);

void func_02AC50(void)
{
    int id;

    if (D_001E38B4 != 0)
        func_02AD28();
    id = func_0A0FC0();
    D_0021D624 = fmodf(D_0021D624, 0.016666999086737633f);
    D_0021D628 = id;
    D_0021D62C = 0.033333335f;
    if (D_001E38B5 != 0) {
        D_001E38B5 = 0;
        D_0021D62C = 0.0f;
    }
    D_0021D624 = D_0021D624 + D_0021D62C;
    D_0021D620 = D_0021D620 + D_0021D62C;
    D_0021D630 = D_0021D62C * 30.0f;
    D_0021D634 = D_0021D634 + 1;
}
