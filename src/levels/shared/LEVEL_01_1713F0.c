/* LEVEL_01:0x1713F0 -- writes a random point inside a sphere around a center. */
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_1713F0(float *out, float *center, float radius)
{
    float v[3];
    float phi;
    float c;
    float s;
    float t;
    float k;

    v[2] = (float)rand() * 9.313225746154785e-10f - 1.0f;
    phi = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(phi);
    s = sqrtf(1.0f - c * c);
    if (phi < 0.0f) s = -s;
    t = sqrtf(1.0f - v[2] * v[2]);
    v[0] = c * t;
    v[1] = s * t;
    k = (float)rand() * 4.6566123179658803e-10f * radius;
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
    out[0] = center[0] + v[0];
    out[1] = center[1] + v[1];
    out[2] = center[2] + v[2];
}
