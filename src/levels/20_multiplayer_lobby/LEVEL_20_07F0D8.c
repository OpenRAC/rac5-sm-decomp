/* LEVEL_20:0x07F0D8 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_00106F70;
extern unsigned char D_00106F6C;
extern int D_00106F74;
extern unsigned D_0018E7B0[3];

extern float func_07A7B0(void);
extern int func_0F9448(float v);
extern void func_07A840(void);
extern int func_07A830(void);

void func_07F0D8(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_07A7B0();
    if (f > 0.01f) {
        p = &D_0018E7B0[D_00106F70 % 3];
        *p = func_0F9448(1000.0f / f);
    } else
        D_0018E7B0[D_00106F70 % 3] = 1000;
    if (D_00106F70 >= 4) {
        if (D_00106F6C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0018E7B0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_00106F6C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0018E7B0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_00106F6C = 1;
        }
    }
    D_00106F70++;
    if (flag)
        D_00106F6C = 1;
    if (D_00106F6C) {
        func_07A840();
        if (func_07A830() == D_00106F74 + 1)
            func_07A840();
        D_00106F74 = func_07A830();
    }
}
