/* LEVEL_01:0x195950 -- when the id is the sentinel value and an object is given, resets a global vector and installs a block of tuning constants. */

struct Tune195950 {
    float f[7];
};

extern float D_00396DD8[4];
extern struct Tune195950 D_00396DE8;

extern float powf(float x, float y);
extern void *memset(void *dst, int c, unsigned int n);

void func_195950(void *obj, int id)
{
    struct Tune195950 t;
    struct Tune195950 *dst;

    if (id == 0xFFFF && obj != 0) {
        dst = &D_00396DE8;
        D_00396DD8[0] = 0.0f;
        D_00396DD8[1] = 0.0f;
        D_00396DD8[2] = 0.0f;
        D_00396DD8[3] = 1.0f;
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
