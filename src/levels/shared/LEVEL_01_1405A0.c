/* LEVEL_01:0x1405A0 -- halves the object's basis rows, seeds the attached record with a sixth of the third row and a 0.3 timer, and sets the speed cap to 300. */
static __inline__ void ScaleTo3(float *d, float *s, float k)
{
    d[0] = s[0] * k;
    d[1] = s[1] * k;
    d[2] = s[2] * k;
}

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

int func_1405A0(float *object)
{
    float *rec = *(float **)((char *)object + 0x58);

    ScaleTo3(rec, object + 8, 0.16666667f);
    rec[4] = 0.3f;
    *(unsigned char *)(rec + 5) = 0;
    Scale3(object, 0.5f);
    Scale3(object + 4, 0.5f);
    Scale3(object + 8, 0.5f);
    object[0x1C] = 300.0f;
    return 1;
}
