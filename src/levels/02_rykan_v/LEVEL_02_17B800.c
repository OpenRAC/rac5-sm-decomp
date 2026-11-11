/* LEVEL_02:0x17B800 -- when the id matches, resets a unit vector and builds a fixed rotation matrix into a global. */

typedef struct Mat_17B800 {
    float m[16];
} Mat_17B800;

extern float D_003AD508[4];
extern Mat_17B800 D_003AD518;

extern void *memset(void *p, int c, unsigned int n);
extern float cosf(float x);
extern float sinf(float x);

void func_17B800(int a0, int a1)
{
    Mat_17B800 m;
    Mat_17B800 *dst;
    float one;
    float ang;

    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            one = 1.0f;
            ang = -0.10471976548433304f;
            D_003AD508[0] = 0;
            D_003AD508[1] = 0;
            D_003AD508[2] = 0;
            D_003AD508[3] = one;
            memset(&m, 0, sizeof(m));
            m.m[0] = one;
            dst = &D_003AD518;
            m.m[5] = cosf(ang);
            m.m[6] = sinf(ang);
            m.m[9] = -sinf(ang);
            m.m[10] = cosf(ang);
            m.m[15] = one;
            *dst = m;
        }
    }
}
