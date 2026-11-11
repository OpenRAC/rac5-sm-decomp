/* LEVEL_23:0x029B08 -- placement copy of LEVEL_01_02BF98.c: advances the frame timer: wraps the clock, picks the frame step (zero when the pause flag is set) and updates the derived counters. */
extern unsigned char D_001C7934;
extern unsigned char D_001C7935;
extern float D_001FEDA0;
extern float D_001FEDA4;
extern int D_001FEDA8;
extern float D_001FEDAC;
extern float D_001FEDB0;
extern int D_001FEDB4;
extern float fmodf(float x, float y);
extern void func_029BE0(void);
extern int func_099740(void);

void func_029B08(void)
{
    int id;

    if (D_001C7934 != 0)
        func_029BE0();
    id = func_099740();
    D_001FEDA4 = fmodf(D_001FEDA4, 0.016666999086737633f);
    D_001FEDA8 = id;
    D_001FEDAC = 0.033333335f;
    if (D_001C7935 != 0) {
        D_001C7935 = 0;
        D_001FEDAC = 0.0f;
    }
    D_001FEDA4 = D_001FEDA4 + D_001FEDAC;
    D_001FEDA0 = D_001FEDA0 + D_001FEDAC;
    D_001FEDB0 = D_001FEDAC * 30.0f;
    D_001FEDB4 = D_001FEDB4 + 1;
}
