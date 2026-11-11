/* LEVEL_10:0x0A69B8 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001FF8C0;
extern unsigned char D_001FF8BC;
extern int D_001FF8C4;
extern unsigned D_002BC820[3];

extern float func_0A1F08(void);
extern int func_1F42D0(float v);
extern void func_0A2000(void);
extern int func_0A1FF0(void);

void func_0A69B8(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A1F08();
    if (f > 0.01f) {
        p = &D_002BC820[D_001FF8C0 % 3];
        *p = func_1F42D0(1000.0f / f);
    } else
        D_002BC820[D_001FF8C0 % 3] = 1000;
    if (D_001FF8C0 >= 4) {
        if (D_001FF8BC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002BC820[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001FF8BC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002BC820[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001FF8BC = 1;
        }
    }
    D_001FF8C0++;
    if (flag)
        D_001FF8BC = 1;
    if (D_001FF8BC) {
        func_0A2000();
        if (func_0A1FF0() == D_001FF8C4 + 1)
            func_0A2000();
        D_001FF8C4 = func_0A1FF0();
    }
}
