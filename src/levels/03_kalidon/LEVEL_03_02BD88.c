/* LEVEL_03:0x02BD88 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_0020CBB4;
extern unsigned char D_0020CBB5;
extern float D_0024C7A0;
extern float D_0024C7A4;
extern int D_0024C7A8;
extern float D_0024C7AC;
extern float D_0024C7B0;
extern int D_0024C7B4;
extern float fmodf(float x, float y);
extern void func_02BE60(void);
extern int func_0A2780(void);

void func_02BD88(void)
{
    int id;

    if (D_0020CBB4 != 0)
        func_02BE60();
    id = func_0A2780();
    D_0024C7A4 = fmodf(D_0024C7A4, 0.016666999086737633f);
    D_0024C7A8 = id;
    D_0024C7AC = 0.033333335f;
    if (D_0020CBB5 != 0) {
        D_0020CBB5 = 0;
        D_0024C7AC = 0.0f;
    }
    D_0024C7A4 = D_0024C7A4 + D_0024C7AC;
    D_0024C7A0 = D_0024C7A0 + D_0024C7AC;
    D_0024C7B0 = D_0024C7AC * 30.0f;
    D_0024C7B4 = D_0024C7B4 + 1;
}
