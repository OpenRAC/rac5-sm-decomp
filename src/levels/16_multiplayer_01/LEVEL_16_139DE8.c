/* LEVEL_16:0x139DE8 -- placement copy of LEVEL_01_15D210.c: when the selector is 0xFFFF and the handle is set, loads two fixed 4-entry float rows and clears the counters. */

typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Head;

extern Head D_002E2C90;
extern float D_002E2CA0[8];

void func_139DE8(void *a0, int a1)
{
    Head *t;
    float *p;

    if (a1 != 0xFFFF) {
        return;
    }
    if (a0 == 0) {
        return;
    }
    t = &D_002E2C90;
    t->i0 = 0;
    t->i1 = 0;
    t->i2 = 0;
    t->f3 = 1.0f;
    p = D_002E2CA0;
    p[0] = -0.42138299345970154f;
    p[1] = -0.24544599652290344f;
    p[2] = 0.7061560153961182f;
    p[3] = 0.5124949812889099f;
    p = p + 4;
    p[0] = 0.7061560153961182f;
    p[1] = -0.5124949812889099f;
    p[2] = 0.42138299345970154f;
    p[3] = -0.24544599652290344f;
}
