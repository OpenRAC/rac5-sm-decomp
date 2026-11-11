/* LEVEL_04:0x075408 -- writes a random vector, uniform direction on the sphere scaled by a random length between two values of the config. */
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

void func_075408(void *a0, float *out, void *a2, char *cfg)
{
    float v[3];
    float ang;
    float c;
    float s;
    float r;
    float lo;
    float range;
    float len;

    v[2] = (float)rand() * 9.313226e-10f - 1.0f;
    ang = (float)rand() * 2.9258362e-09f - 3.1415927f;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f)
        s = -s;
    r = sqrtf(1.0f - v[2] * v[2]);
    v[0] = c * r;
    v[1] = s * r;
    lo = *(float *)(cfg + 0x3C);
    range = *(float *)(cfg + 0x40) - lo;
    len = lo + range * ((float)rand() * 4.656613e-10f);
    out[0] = len * v[0];
    out[1] = len * v[1];
    out[2] = len * v[2];
}
