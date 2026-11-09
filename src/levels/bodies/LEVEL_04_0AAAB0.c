/* LEVEL_04:0x0AAAB0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0020FD80;
extern unsigned char D_0020FD7C;
extern int D_0020FD84;
extern unsigned D_002CDC20[3];

extern float func_0A6000(void);
extern int func_204438(float v);
extern void func_0A60F8(void);
extern int func_0A60E8(void);

void func_0AAAB0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A6000();
    if (f > 0.01f) {
        p = &D_002CDC20[D_0020FD80 % 3];
        *p = func_204438(1000.0f / f);
    } else
        D_002CDC20[D_0020FD80 % 3] = 1000;
    if (D_0020FD80 >= 4) {
        if (D_0020FD7C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002CDC20[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0020FD7C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002CDC20[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0020FD7C = 1;
        }
    }
    D_0020FD80++;
    if (flag)
        D_0020FD7C = 1;
    if (D_0020FD7C) {
        func_0A60F8();
        if (func_0A60E8() == D_0020FD84 + 1)
            func_0A60F8();
        D_0020FD84 = func_0A60E8();
    }
}
