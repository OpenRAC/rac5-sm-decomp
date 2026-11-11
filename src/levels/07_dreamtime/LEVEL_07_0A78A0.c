/* LEVEL_07:0x0A78A0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0020ABC0;
extern unsigned char D_0020ABBC;
extern int D_0020ABC4;
extern unsigned D_002C8D20[3];

extern float func_0A2DF0(void);
extern int func_1FF5F0(float v);
extern void func_0A2EE8(void);
extern int func_0A2ED8(void);

void func_0A78A0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A2DF0();
    if (f > 0.01f) {
        p = &D_002C8D20[D_0020ABC0 % 3];
        *p = func_1FF5F0(1000.0f / f);
    } else
        D_002C8D20[D_0020ABC0 % 3] = 1000;
    if (D_0020ABC0 >= 4) {
        if (D_0020ABBC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002C8D20[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0020ABBC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002C8D20[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0020ABBC = 1;
        }
    }
    D_0020ABC0++;
    if (flag)
        D_0020ABBC = 1;
    if (D_0020ABBC) {
        func_0A2EE8();
        if (func_0A2ED8() == D_0020ABC4 + 1)
            func_0A2EE8();
        D_0020ABC4 = func_0A2ED8();
    }
}
