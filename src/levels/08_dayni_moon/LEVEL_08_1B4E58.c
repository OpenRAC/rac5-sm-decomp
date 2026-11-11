/* LEVEL_08:0x1B4E58 -- resets a global vector and loads the default tuning block. */
typedef struct { float x, y, z, w; } V4;
typedef struct {
    float f[13];
    unsigned int mask;
    float g[3];
} P;
extern V4 D_003E7BC8;
extern P D_003E7BD8;
extern float powf(float x, float y);
extern void *memset(void *p, int c, unsigned int n);

void func_1B4E58(int a, int b)
{
    P p;
    P *dst;

    if (b == 0xFFFF) {
        if (a != 0) {
            dst = &D_003E7BD8;
            D_003E7BC8.x = 0.0f;
            D_003E7BC8.y = 0.0f;
            D_003E7BC8.z = 0.0f;
            D_003E7BC8.w = 1.0f;
            memset(&p, 0, sizeof(P));
            p.f[0] = 0.1f;
            p.f[1] = 0.3f;
            p.f[2] = 0.6f;
            p.f[3] = 1.0f;
            p.f[4] = 7.0f;
            p.f[5] = 7.0f;
            p.f[6] = 0.25f;
            p.f[7] = 30.0f;
            p.f[8] = 45.0f;
            p.f[9] = 0.3500000238f;
            p.f[10] = 0.4166666865f;
            p.f[11] = 0.0500000082f;
            p.f[12] = 0.6283185482f;
            p.mask = 0x7F007F00;
            p.g[0] = powf(0.9f, 1.0f);
            p.g[1] = powf(0.95f, 1.0f);
            p.g[2] = powf(0.9f, 1.0f);
            *dst = p;
        }
    }
}
