/* LEVEL_06:0x0ACAF8 -- zeroes two float globals when the argument is null, otherwise stores a converted helper result into both. */

extern int D_001EB15C;
extern int D_001EB160;

extern void func_0A8ED8(int a0, void *a1, float f12);
extern int func_0A2EB0(void *a0);

void func_0ACAF8(int a0)
{
    int buf[4];
    int v;
    float f;
    float *q1;
    float *q2;

    if (a0 != 0) {
        q1 = (float *)&D_001EB15C;
        q2 = (float *)&D_001EB160;
        func_0A8ED8(0x31, buf, 0.0f);
        v = func_0A2EB0(buf);
        f = (float)(v - 4);
        *q2 = f;
        *q1 = f;
    } else {
        D_001EB15C = 0;
        D_001EB160 = 0;
    }
}
