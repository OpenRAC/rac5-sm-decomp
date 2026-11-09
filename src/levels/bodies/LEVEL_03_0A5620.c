/* LEVEL_03:0x0A5620 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_0020EF40;
extern unsigned char D_0020EF3C;
extern int D_0020EF44;
extern unsigned D_002CE2A0[3];

extern float func_0A0B70(void);
extern int func_203908(float v);
extern void func_0A0C68(void);
extern int func_0A0C58(void);

void func_0A5620(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_0A0B70();
    if (f > 0.01f) {
        p = &D_002CE2A0[D_0020EF40 % 3];
        *p = func_203908(1000.0f / f);
    } else
        D_002CE2A0[D_0020EF40 % 3] = 1000;
    if (D_0020EF40 >= 4) {
        if (D_0020EF3C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_002CE2A0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_0020EF3C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_002CE2A0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_0020EF3C = 1;
        }
    }
    D_0020EF40++;
    if (flag)
        D_0020EF3C = 1;
    if (D_0020EF3C) {
        func_0A0C68();
        if (func_0A0C58() == D_0020EF44 + 1)
            func_0A0C68();
        D_0020EF44 = func_0A0C58();
    }
}
