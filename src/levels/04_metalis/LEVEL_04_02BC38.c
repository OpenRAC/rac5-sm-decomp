/* LEVEL_04:0x02BC38 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_0020D6B4;
extern unsigned char D_0020D6B5;
extern float D_0024C120;
extern float D_0024C124;
extern int D_0024C128;
extern float D_0024C12C;
extern float D_0024C130;
extern int D_0024C134;
extern float fmodf(float x, float y);
extern void func_02BD10(void);
extern int func_0A7C10(void);

void func_02BC38(void)
{
    int id;

    if (D_0020D6B4 != 0)
        func_02BD10();
    id = func_0A7C10();
    D_0024C124 = fmodf(D_0024C124, 0.016666999086737633f);
    D_0024C128 = id;
    D_0024C12C = 0.033333335f;
    if (D_0020D6B5 != 0) {
        D_0020D6B5 = 0;
        D_0024C12C = 0.0f;
    }
    D_0024C124 = D_0024C124 + D_0024C12C;
    D_0024C120 = D_0024C120 + D_0024C12C;
    D_0024C130 = D_0024C12C * 30.0f;
    D_0024C134 = D_0024C134 + 1;
}
