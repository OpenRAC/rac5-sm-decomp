/* LEVEL_10:0x0B3490 -- placement copy of LEVEL_06_0ACAF8.c: zeroes two float globals when the argument is null, otherwise stores a converted helper result into both. */

extern int D_0020525C;
extern int D_00205260;

extern void func_0AF820(int a0, void *a1, float f12);
extern int func_0A97F8(void *a0);

void func_0B3490(int a0)
{
    int buf[4];
    int v;
    float f;
    float *q1;
    float *q2;

    if (a0 != 0) {
        q1 = (float *)&D_0020525C;
        q2 = (float *)&D_00205260;
        func_0AF820(0x31, buf, 0.0f);
        v = func_0A97F8(buf);
        f = (float)(v - 4);
        *q2 = f;
        *q1 = f;
    } else {
        D_0020525C = 0;
        D_00205260 = 0;
    }
}
