/* LEVEL_15:0x0FD340 -- stores a float; then builds a 2D rotation matrix from a scaled cosine. */
typedef struct Vec3 { float x, y, z; } Vec3;

extern float cosf(float);
extern float sqrtf(float);

void func_0FD340(float *p, float v)
{
    *p = v;
}

void func_0FD348(Vec3 *m, float a, float *k)
{
    float t = a * k[0];
    float c = cosf(t);
    float s = sqrtf(1.0f - c * c);
    if (t < 0.0f)
        s = -s;
    {
        Vec3 *p1 = m + 1;
        Vec3 *p2 = m + 2;
        Vec3 *p3 = m + 3;
        m->x = c;
        m->y = s;
        m->z = 0.0f;
        p1->x = -s;
        p1->y = c;
        p1->z = 0.0f;
        p2->x = 0.0f;
        p2->y = 0.0f;
        p2->z = 1.0f;
        p3->x = 0.0f;
        p3->y = 0.0f;
        p3->z = 0.0f;
    }
}
