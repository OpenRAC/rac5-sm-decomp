/* LEVEL_08:0x0B0198 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0023F780;
extern unsigned char D_0023F77C;
extern int D_0023F784;
extern unsigned D_003026A0[3];

extern float func_0AB6E8(void);
extern int func_233E00(float v);
extern void func_0AB7E0(void);
extern int func_0AB7D0(void);

void func_0B0198(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0AB6E8();
    if (f > 0.01f) {
        p = &D_003026A0[D_0023F780 % 3];
        *p = func_233E00(1000.0f / f);
    } else
        D_003026A0[D_0023F780 % 3] = 1000;
    if (D_0023F780 >= 4) {
        if (D_0023F77C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_003026A0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0023F77C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_003026A0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0023F77C = 1;
        }
    }
    D_0023F780++;
    if (flag)
        D_0023F77C = 1;
    if (D_0023F77C) {
        func_0AB7E0();
        if (func_0AB7D0() == D_0023F784 + 1)
            func_0AB7E0();
        D_0023F784 = func_0AB7D0();
    }
}
