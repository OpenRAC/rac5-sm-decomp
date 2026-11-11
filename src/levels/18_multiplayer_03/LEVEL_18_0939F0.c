/* LEVEL_18:0x0939F0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001A5D10;
extern unsigned char D_001A5D0C;
extern int D_001A5D14;
extern unsigned D_0026B2F0[3];

extern float func_08F0C8(void);
extern int func_1981B8(float v);
extern void func_08F158(void);
extern int func_08F148(void);

void func_0939F0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_08F0C8();
    if (f > 0.01f) {
        p = &D_0026B2F0[D_001A5D10 % 3];
        *p = func_1981B8(1000.0f / f);
    } else
        D_0026B2F0[D_001A5D10 % 3] = 1000;
    if (D_001A5D10 >= 4) {
        if (D_001A5D0C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0026B2F0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001A5D0C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0026B2F0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001A5D0C = 1;
        }
    }
    D_001A5D10++;
    if (flag)
        D_001A5D0C = 1;
    if (D_001A5D0C) {
        func_08F158();
        if (func_08F148() == D_001A5D14 + 1)
            func_08F158();
        D_001A5D14 = func_08F148();
    }
}
