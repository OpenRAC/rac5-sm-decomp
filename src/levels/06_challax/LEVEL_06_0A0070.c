/* LEVEL_06:0x0A0070 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001E57C0;
extern unsigned char D_001E57BC;
extern int D_001E57C4;
extern unsigned D_002A01A0[3];

extern float func_09B5C0(void);
extern int func_1DA1C0(float v);
extern void func_09B6B8(void);
extern int func_09B6A8(void);

void func_0A0070(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_09B5C0();
    if (f > 0.01f) {
        p = &D_002A01A0[D_001E57C0 % 3];
        *p = func_1DA1C0(1000.0f / f);
    } else
        D_002A01A0[D_001E57C0 % 3] = 1000;
    if (D_001E57C0 >= 4) {
        if (D_001E57BC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002A01A0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001E57BC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002A01A0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001E57BC = 1;
        }
    }
    D_001E57C0++;
    if (flag)
        D_001E57BC = 1;
    if (D_001E57BC) {
        func_09B6B8();
        if (func_09B6A8() == D_001E57C4 + 1)
            func_09B6B8();
        D_001E57C4 = func_09B6A8();
    }
}
