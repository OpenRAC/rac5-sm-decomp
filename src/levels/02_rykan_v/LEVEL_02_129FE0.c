/* LEVEL_02:0x129FE0 -- placement copy of LEVEL_01_123CB8.c: placement copy of LEVEL_01_123CB8.c: builds a 4x4 rotation matrix from an axis and an angle. */
extern float sinf(float);
extern float cosf(float);

void func_129FE0(float *m, float x, float y, float z, float angle)
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
    m[4] = tx * y - s * z;
    m[0] = tx * x + c;
    m[6] = ty * z + s * x;
    m[5] = ty * y + c;
    m[8] = tx * z + s * y;
    m[10] = tz * z + c;
    m[9] = ty * z - s * x;
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = 0.0f;
    m[12] = 0.0f;
    m[13] = 0.0f;
    m[14] = 0.0f;
    m[15] = 1.0f;
}
