/* LEVEL_16:0x0949E0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001A4890;
extern unsigned char D_001A488C;
extern int D_001A4894;
extern unsigned D_0026AF70[3];

extern float func_0900B8(void);
extern int func_196D18(float v);
extern void func_090148(void);
extern int func_090138(void);

void func_0949E0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0900B8();
    if (f > 0.01f) {
        p = &D_0026AF70[D_001A4890 % 3];
        *p = func_196D18(1000.0f / f);
    } else
        D_0026AF70[D_001A4890 % 3] = 1000;
    if (D_001A4890 >= 4) {
        if (D_001A488C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0026AF70[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001A488C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0026AF70[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001A488C = 1;
        }
    }
    D_001A4890++;
    if (flag)
        D_001A488C = 1;
    if (D_001A488C) {
        func_090148();
        if (func_090138() == D_001A4894 + 1)
            func_090148();
        D_001A4894 = func_090138();
    }
}
