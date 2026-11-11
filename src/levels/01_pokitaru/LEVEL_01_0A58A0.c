/* LEVEL_01:0x0A58A0 -- updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001F68C0;
extern unsigned char D_001F68BC;
extern int D_001F68C4;
extern unsigned D_002B3420[3];

extern float func_0A0DF0(void);
extern int func_1EB278(float v);
extern void func_0A0EE8(void);
extern int func_0A0ED8(void);

void func_0A58A0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A0DF0();
    if (f > 0.01f) {
        p = &D_002B3420[D_001F68C0 % 3];
        *p = func_1EB278(1000.0f / f);
    } else
        D_002B3420[D_001F68C0 % 3] = 1000;
    if (D_001F68C0 >= 4) {
        if (D_001F68BC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002B3420[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001F68BC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002B3420[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001F68BC = 1;
        }
    }
    D_001F68C0++;
    if (flag)
        D_001F68BC = 1;
    if (D_001F68BC) {
        func_0A0EE8();
        if (func_0A0ED8() == D_001F68C4 + 1)
            func_0A0EE8();
        D_001F68C4 = func_0A0ED8();
    }
}
