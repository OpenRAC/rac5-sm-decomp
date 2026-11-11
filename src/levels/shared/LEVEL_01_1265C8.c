/* LEVEL_01:0x1265C8 -- converts a direction vector to yaw (atan2 of x and z) and negated pitch (asin of y). */
extern float atan2f(float y, float x);
extern float asinf(float x);

void func_1265C8(float *yaw, float *pitch, float *v)
{
    float x, y, z;

    x = v[0];
    y = v[1];
    z = v[2];
    *yaw = atan2f(x, z);
    *pitch = -asinf(y);
}
