/* LEVEL_19:0x029728 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001A31E4;
extern unsigned char D_001A31E5;
extern float D_001E07A0;
extern float D_001E07A4;
extern int D_001E07A8;
extern float D_001E07AC;
extern float D_001E07B0;
extern int D_001E07B4;
extern float fmodf(float x, float y);
extern void func_029810(void);
extern int func_0914F0(void);

void func_029728(void)
{
    int id;

    if (D_001A31E4 != 0)
        func_029810();
    id = func_0914F0();
    D_001E07A4 = fmodf(D_001E07A4, 0.016666999086737633f);
    D_001E07A8 = id;
    D_001E07AC = 0.033333335f;
    if (D_001A31E5 != 0) {
        D_001A31E5 = 0;
        D_001E07AC = 0.0f;
    }
    D_001E07A4 = D_001E07A4 + D_001E07AC;
    D_001E07A0 = D_001E07A0 + D_001E07AC;
    D_001E07B0 = D_001E07AC * 30.0f;
    D_001E07B4 = D_001E07B4 + 1;
}
