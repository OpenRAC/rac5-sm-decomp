/* LEVEL_22:0x093E80 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_00155C40;
extern unsigned char D_00155C3C;
extern int D_00155C44;
extern unsigned D_00208FE0[3];

extern float func_08F468(void);
extern int func_14A630(float v);
extern void func_08F4F8(void);
extern int func_08F4E8(void);

void func_093E80(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_08F468();
    if (f > 0.01f) {
        p = &D_00208FE0[D_00155C40 % 3];
        *p = func_14A630(1000.0f / f);
    } else
        D_00208FE0[D_00155C40 % 3] = 1000;
    if (D_00155C40 >= 4) {
        if (D_00155C3C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_00208FE0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_00155C3C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_00208FE0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_00155C3C = 1;
        }
    }
    D_00155C40++;
    if (flag)
        D_00155C3C = 1;
    if (D_00155C3C) {
        func_08F4F8();
        if (func_08F4E8() == D_00155C44 + 1)
            func_08F4F8();
        D_00155C44 = func_08F4E8();
    }
}
