/* LEVEL_09:0x0A2B50 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001E06C0;
extern unsigned char D_001E06BC;
extern int D_001E06C4;
extern unsigned D_0029ABA0[3];

extern float func_09E0A0(void);
extern int func_1D50E0(float v);
extern void func_09E198(void);
extern int func_09E188(void);

void func_0A2B50(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_09E0A0();
    if (f > 0.01f) {
        p = &D_0029ABA0[D_001E06C0 % 3];
        *p = func_1D50E0(1000.0f / f);
    } else
        D_0029ABA0[D_001E06C0 % 3] = 1000;
    if (D_001E06C0 >= 4) {
        if (D_001E06BC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0029ABA0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001E06BC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0029ABA0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001E06BC = 1;
        }
    }
    D_001E06C0++;
    if (flag)
        D_001E06BC = 1;
    if (D_001E06BC) {
        func_09E198();
        if (func_09E188() == D_001E06C4 + 1)
            func_09E198();
        D_001E06C4 = func_09E188();
    }
}
