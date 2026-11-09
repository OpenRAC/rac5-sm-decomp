/* LEVEL_19:0x094270 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001A5A10;
extern unsigned char D_001A5A0C;
extern int D_001A5A14;
extern unsigned D_0026B0F0[3];

extern float func_08F948(void);
extern int func_197EE0(float v);
extern void func_08F9D8(void);
extern int func_08F9C8(void);

void func_094270(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_08F948();
    if (f > 0.01f) {
        p = &D_0026B0F0[D_001A5A10 % 3];
        *p = func_197EE0(1000.0f / f);
    } else
        D_0026B0F0[D_001A5A10 % 3] = 1000;
    if (D_001A5A10 >= 4) {
        if (D_001A5A0C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0026B0F0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001A5A0C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0026B0F0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001A5A0C = 1;
        }
    }
    D_001A5A10++;
    if (flag)
        D_001A5A0C = 1;
    if (D_001A5A0C) {
        func_08F9D8();
        if (func_08F9C8() == D_001A5A14 + 1)
            func_08F9D8();
        D_001A5A14 = func_08F9C8();
    }
}
