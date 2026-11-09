/* LEVEL_24:0x09F118 -- placement copy of LEVEL_01_0A58A0.c: updates a three-sample rate history and a hysteresis flag. */
extern unsigned D_001C7540;
extern unsigned char D_001C753C;
extern int D_001C7544;
extern unsigned D_0027F2E0[3];

extern float func_09A668(void);
extern int func_1BBF50(float v);
extern void func_09A760(void);
extern int func_09A750(void);

void func_09F118(int flag)
{
    float f;
    int ok;
    int ok2;
    unsigned i;
    unsigned j;
    unsigned *p;

    f = func_09A668();
    if (f > 0.01f) {
        p = &D_0027F2E0[D_001C7540 % 3];
        *p = func_1BBF50(1000.0f / f);
    } else
        D_0027F2E0[D_001C7540 % 3] = 1000;
    if (D_001C7540 >= 4) {
        if (D_001C753C) {
            ok = 0;
            for (i = 0; i < 3; i++) {
                if (D_0027F2E0[i] >= 29)
                    ok = 1;
            }
            if (!ok)
                D_001C753C = 0;
        } else {
            ok2 = 1;
            for (j = 0; j < 3; j++) {
                if (D_0027F2E0[j] <= 29)
                    ok2 = 0;
            }
            if (ok2)
                D_001C753C = 1;
        }
    }
    D_001C7540++;
    if (flag)
        D_001C753C = 1;
    if (D_001C753C) {
        func_09A760();
        if (func_09A750() == D_001C7544 + 1)
            func_09A760();
        D_001C7544 = func_09A750();
    }
}
