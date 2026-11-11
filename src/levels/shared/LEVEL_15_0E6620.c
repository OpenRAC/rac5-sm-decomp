/* LEVEL_15:0x0E6620 -- builds a unit direction vector from two fixed-point angles. */
extern float cosf(float x);
extern float sqrtf(float x);

void func_0E6620(float *out, float a, float b)
{
    float s;
    float c;
    float t;
    float z;
    float ang;

    z = a * 9.313225746154785e-10f - 1.0f;
    ang = b * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(ang);
    s = sqrtf(1.0f - c * c);
    if (ang < 0.0f) {
        s = -s;
    }
    t = sqrtf(1.0f - z * z);
    out[0] = c * t;
    out[1] = s * t;
    out[2] = z;
}
