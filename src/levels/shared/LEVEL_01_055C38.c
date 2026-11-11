/* LEVEL_01:0x055C38 -- adds a scaled float triple from one record field to another. */
static __inline__ void Scale3(float *d, float *s, float k)
{
    d[0] = k * s[0];
    d[1] = k * s[1];
    d[2] = k * s[2];
}
static __inline__ void Add3(float *t, float *v)
{
    t[0] = t[0] + v[0];
    t[1] = t[1] + v[1];
    t[2] = t[2] + v[2];
}
void func_055C38(char *record, float scale)
{
    float value[3];
    Scale3(value, (float *)(record + 0x2f4), scale);
    Add3((float *)(record + 0xc5c), value);
}
