/* LEVEL_23:0x09C5E0 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001C9CC0;
extern unsigned char D_001C9CBC;
extern int D_001C9CC4;
extern unsigned D_00284860[3];

extern float func_097B30(void);
extern int func_1BE6B8(float v);
extern void func_097C28(void);
extern int func_097C18(void);

void func_09C5E0(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_097B30();
    if (f > 0.01f) {
        p = &D_00284860[D_001C9CC0 % 3];
        *p = func_1BE6B8(1000.0f / f);
    } else
        D_00284860[D_001C9CC0 % 3] = 1000;
    if (D_001C9CC0 >= 4) {
        if (D_001C9CBC) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_00284860[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001C9CBC = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_00284860[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001C9CBC = 1;
        }
    }
    D_001C9CC0++;
    if (flag)
        D_001C9CBC = 1;
    if (D_001C9CBC) {
        func_097C28();
        if (func_097C18() == D_001C9CC4 + 1)
            func_097C28();
        D_001C9CC4 = func_097C18();
    }
}
