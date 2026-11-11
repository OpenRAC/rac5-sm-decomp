/* LEVEL_01:0x1230B0 -- copies a four-float vector negating the first three components. */
void func_1230B0(float *d, float *s)
{
    d[0] = -s[0];
    d[1] = -s[1];
    d[2] = -s[2];
    d[3] = s[3];
}
