/* LEVEL_02:0x0AC1B0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0020B880;
extern unsigned char D_0020B87C;
extern int D_0020B884;
extern unsigned D_002CA920[3];

extern float func_0A7700(void);
extern int func_1FFF10(float v);
extern void func_0A77F8(void);
extern int func_0A77E8(void);

void func_0AC1B0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A7700();
    if (f > 0.01f) {
        p = &D_002CA920[D_0020B880 % 3];
        *p = func_1FFF10(1000.0f / f);
    } else
        D_002CA920[D_0020B880 % 3] = 1000;
    if (D_0020B880 >= 4) {
        if (D_0020B87C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002CA920[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0020B87C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002CA920[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0020B87C = 1;
        }
    }
    D_0020B880++;
    if (flag)
        D_0020B87C = 1;
    if (D_0020B87C) {
        func_0A77F8();
        if (func_0A77E8() == D_0020B884 + 1)
            func_0A77F8();
        D_0020B884 = func_0A77E8();
    }
}
