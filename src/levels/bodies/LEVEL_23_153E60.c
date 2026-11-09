/* LEVEL_23:0x153E60 -- placement copy of LEVEL_01_150FB0.c: when the id is the sentinel value and an object is given, resets a global vector and installs a block of tuning constants. */

struct Tune150FB0 {
    float f[11];
};

extern float D_00363C60[4];
extern struct Tune150FB0 D_00363C70;

extern float powf(float x, float y);
extern void *memset(void *dst, int c, unsigned int n);

void func_153E60(void *obj, int id)
{
    struct Tune150FB0 t;
    struct Tune150FB0 *dst;

    if (id == 0xFFFF && obj != 0) {
        dst = &D_00363C70;
        D_00363C60[0] = 0.0f;
        D_00363C60[1] = 0.0f;
        D_00363C60[2] = 0.0f;
        D_00363C60[3] = 1.0f;
        memset(&t, 0, sizeof(t));
        t.f[0] = 0.01f;
        t.f[1] = 0.20000002f;
        t.f[2] = 0.1f;
        t.f[3] = 0.3f;
        t.f[4] = 0.005f;
        t.f[5] = powf(0.97f, 1.0f);
        t.f[6] = 30.000597f;
        t.f[7] = 45.000896f;
        t.f[8] = 6.000119f;
        *dst = t;
    }
}
