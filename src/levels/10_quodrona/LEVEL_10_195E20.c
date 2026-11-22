/* LEVEL_10:0x195E20 -- placement copy of LEVEL_01_195950.c: when the id is the sentinel value and an object is given, resets a global vector and installs a block of tuning constants. */

struct Tune195950 {
    float f[7];
};

extern float D_003A0228[4];
extern struct Tune195950 D_003A0238;

extern float powf(float x, float y);
extern void *memset(void *dst, int c, unsigned int n);

void func_195E20(void *obj, int id)
{
    struct Tune195950 t;
    struct Tune195950 *dst;

    if (id == 0xFFFF && obj != 0) {
        dst = &D_003A0238;
        D_003A0228[0] = 0.0f;
        D_003A0228[1] = 0.0f;
        D_003A0228[2] = 0.0f;
        D_003A0228[3] = 1.0f;
        memset(&t, 0, sizeof(t));
        t.f[0] = 0.04f;
        t.f[1] = powf(0.0f, 1.0f);
        t.f[2] = 0.55f;
        t.f[3] = 0.05f;
        t.f[4] = 0.02f;
        t.f[5] = 0.15f;
        t.f[6] = 0.5f;
        *dst = t;
    }
}
