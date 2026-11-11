/* LEVEL_05:0x0A3E60 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001E5C40;
extern unsigned char D_001E5C3C;
extern int D_001E5C44;
extern unsigned D_0029F2E0[3];

extern float func_09F3B0(void);
extern int func_1DA670(float v);
extern void func_09F4A8(void);
extern int func_09F498(void);

void func_0A3E60(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_09F3B0();
    if (f > 0.01f) {
        p = &D_0029F2E0[D_001E5C40 % 3];
        *p = func_1DA670(1000.0f / f);
    } else
        D_0029F2E0[D_001E5C40 % 3] = 1000;
    if (D_001E5C40 >= 4) {
        if (D_001E5C3C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0029F2E0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001E5C3C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0029F2E0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001E5C3C = 1;
        }
    }
    D_001E5C40++;
    if (flag)
        D_001E5C3C = 1;
    if (D_001E5C3C) {
        func_09F4A8();
        if (func_09F498() == D_001E5C44 + 1)
            func_09F4A8();
        D_001E5C44 = func_09F498();
    }
}
