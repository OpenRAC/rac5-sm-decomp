/* LEVEL_15:0x0E6738 -- writes a random unit direction with z between two bounds. */
extern float cosf(float);
extern float sqrtf(float);

void func_0E6738(float *out, float a, float b, float c, float d)
{
    float z;
    float ang;
    float cs;
    float sn;
    float r;

    z = a + (b - a) * c * 4.656612873077393e-10f;
    ang = d * 2.925836239953128e-09f - 3.1415927f;
    cs = cosf(ang);
    sn = sqrtf(1.0f - cs * cs);
    if (ang < 0.0f) {
        sn = -sn;
    }
    r = sqrtf(1.0f - z * z);
    out[0] = cs * r;
    out[2] = z;
    out[1] = sn * r;
}
