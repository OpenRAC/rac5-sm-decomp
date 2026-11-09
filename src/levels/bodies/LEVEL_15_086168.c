/* LEVEL_15:0x086168 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0014B540;
extern unsigned char D_0014B53C;
extern int D_0014B544;
extern unsigned D_001CB460[3];

extern float func_081750(void);
extern int func_13FF70(float v);
extern void func_0817E0(void);
extern int func_0817D0(void);

void func_086168(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_081750();
    if (f > 0.01f) {
        p = &D_001CB460[D_0014B540 % 3];
        *p = func_13FF70(1000.0f / f);
    } else
        D_001CB460[D_0014B540 % 3] = 1000;
    if (D_0014B540 >= 4) {
        if (D_0014B53C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_001CB460[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0014B53C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_001CB460[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0014B53C = 1;
        }
    }
    D_0014B540++;
    if (flag)
        D_0014B53C = 1;
    if (D_0014B53C) {
        func_0817E0();
        if (func_0817D0() == D_0014B544 + 1)
            func_0817E0();
        D_0014B544 = func_0817D0();
    }
}
