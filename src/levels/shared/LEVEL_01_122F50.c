/* LEVEL_01:0x122F50 -- quaternion (x, y, z, w) to a 4x4 row-major matrix. */
void func_122F50(float *m, float *q)
{
    float x = q[0];
    float y = q[1];
    float z = q[2];
    float w = q[3];
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float xw = x * w;
    float yz = y * z;
    float yw = y * w;
    float zw = z * w;
    float n = 0.0f;

    m[0] = 1.0f - 2.0f * (yy + zz);
    m[1] = 2.0f * (xy + zw);
    m[2] = 2.0f * (xz - yw);
    m[11] = n;
    m[4] = 2.0f * (xy - zw);
    m[5] = 1.0f - 2.0f * (xx + zz);
    m[6] = 2.0f * (yz + xw);
    m[7] = n;
    m[8] = 2.0f * (xz + yw);
    m[9] = 2.0f * (yz - xw);
    m[10] = 1.0f - 2.0f * (xx + yy);
    m[3] = n;
}
