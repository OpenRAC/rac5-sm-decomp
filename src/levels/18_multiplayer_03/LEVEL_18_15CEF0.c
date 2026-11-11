/* LEVEL_18:0x15CEF0 -- when the id is the sentinel value and an object is given, resets a global vector and stores a fixed small rotation matrix. */

struct Mat15CEF0 {
    float m[16];
};

extern float D_002E5550[4];
extern struct Mat15CEF0 D_002E5560;

extern float cosf(float x);
extern float sinf(float x);
extern void *memset(void *dst, int c, unsigned int n);

void func_15CEF0(void *obj, int id)
{
    struct Mat15CEF0 m;
    float a;
    struct Mat15CEF0 *dst;

    if (id == 0xFFFF && obj != 0) {
        dst = &D_002E5560;
        D_002E5550[0] = 0.0f;
        D_002E5550[1] = 0.0f;
        D_002E5550[2] = 0.0f;
        D_002E5550[3] = 1.0f;
        memset(&m, 0, sizeof(m));
        a = 0.03490659f;
        m.m[0] = cosf(a);
        m.m[2] = -sinf(a);
        m.m[5] = 1.0f;
        m.m[8] = sinf(a);
        m.m[10] = cosf(a);
        m.m[15] = 1.0f;
        *dst = m;
    }
}
