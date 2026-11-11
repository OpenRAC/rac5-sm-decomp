/* LEVEL_01:0x123FA0 -- builds a 3x3 rotation matrix from an axis and an angle. */
extern float sinf(float);
extern float cosf(float);

void func_123FA0(float *m, float x, float y, float z, float angle)
{
    float s, c, t;
    float tx, ty, tz;

    s = sinf(angle);
    c = cosf(angle);
    t = 1.0f - c;
    tx = t * x;
    ty = t * y;
    tz = t * z;
    m[2] = tx * z - s * y;
    m[1] = tx * y + s * z;
    m[3] = tx * y - s * z;
    m[0] = tx * x + c;
    m[5] = ty * z + s * x;
    m[4] = ty * y + c;
    m[7] = ty * z - s * x;
    m[6] = tx * z + s * y;
    m[8] = tz * z + c;
}
