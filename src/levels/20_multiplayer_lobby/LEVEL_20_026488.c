/* LEVEL_20:0x026488 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_00104744;
extern unsigned char D_00104745;
extern float D_00137FA0;
extern float D_00137FA4;
extern int D_00137FA8;
extern float D_00137FAC;
extern float D_00137FB0;
extern int D_00137FB4;
extern float fmodf(float x, float y);
extern void func_026570(void);
extern int func_07C358(void);

void func_026488(void)
{
    int id;

    if (D_00104744 != 0)
        func_026570();
    id = func_07C358();
    D_00137FA4 = fmodf(D_00137FA4, 0.016666999086737633f);
    D_00137FA8 = id;
    D_00137FAC = 0.033333335f;
    if (D_00104745 != 0) {
        D_00104745 = 0;
        D_00137FAC = 0.0f;
    }
    D_00137FA4 = D_00137FA4 + D_00137FAC;
    D_00137FA0 = D_00137FA0 + D_00137FAC;
    D_00137FB0 = D_00137FAC * 30.0f;
    D_00137FB4 = D_00137FB4 + 1;
}
