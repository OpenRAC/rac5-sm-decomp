/* LEVEL_17:0x093ED8 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_00197E90;
extern unsigned char D_00197E8C;
extern int D_00197E94;
extern unsigned D_0025C270[3];

extern float func_08F5B0(void);
extern int func_18A360(float v);
extern void func_08F640(void);
extern int func_08F630(void);

void func_093ED8(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_08F5B0();
    if (f > 0.01f) {
        p = &D_0025C270[D_00197E90 % 3];
        *p = func_18A360(1000.0f / f);
    } else
        D_0025C270[D_00197E90 % 3] = 1000;
    if (D_00197E90 >= 4) {
        if (D_00197E8C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0025C270[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_00197E8C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0025C270[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_00197E8C = 1;
        }
    }
    D_00197E90++;
    if (flag)
        D_00197E8C = 1;
    if (D_00197E8C) {
        func_08F640();
        if (func_08F630() == D_00197E94 + 1)
            func_08F640();
        D_00197E94 = func_08F630();
    }
}
