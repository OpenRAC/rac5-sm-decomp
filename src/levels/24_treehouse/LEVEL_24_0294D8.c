/* LEVEL_24:0x0294D8 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001C51B4;
extern unsigned char D_001C51B5;
extern float D_001FD820;
extern float D_001FD824;
extern int D_001FD828;
extern float D_001FD82C;
extern float D_001FD830;
extern int D_001FD834;
extern float fmodf(float x, float y);
extern void func_0295B0(void);
extern int func_09C278(void);

void func_0294D8(void)
{
    int id;

    if (D_001C51B4 != 0)
        func_0295B0();
    id = func_09C278();
    D_001FD824 = fmodf(D_001FD824, 0.016666999086737633f);
    D_001FD828 = id;
    D_001FD82C = 0.033333335f;
    if (D_001C51B5 != 0) {
        D_001C51B5 = 0;
        D_001FD82C = 0.0f;
    }
    D_001FD824 = D_001FD824 + D_001FD82C;
    D_001FD820 = D_001FD820 + D_001FD82C;
    D_001FD830 = D_001FD82C * 30.0f;
    D_001FD834 = D_001FD834 + 1;
}
