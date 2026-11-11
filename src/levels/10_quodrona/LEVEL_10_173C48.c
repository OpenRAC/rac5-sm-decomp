/* LEVEL_10:0x173C48 -- returns the arc tangent of two dot products of a vector with two rows stored in the object. */

extern float atan2f(float y, float x);

float func_173C48(char *a0, float *a1)
{
    float *r2;
    float *r1;
    float y;
    float x;

    r1 = (float *)(a0 + 0x8);
    r2 = (float *)(a0 + 0x20);
    x = a1[0] * r1[0] + a1[1] * r1[1] + a1[2] * r1[2];
    y = a1[0] * r2[0] + a1[1] * r2[1] + a1[2] * r2[2];
    return atan2f(y, x);
}
