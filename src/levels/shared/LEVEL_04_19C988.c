/* LEVEL_04:0x19C988 -- copies a transform block with fixed scale factors and a bias. */

static __inline__ void ScaleRow(float *dst, float *src, float k)
{
    dst[0] = src[0] * k;
    dst[1] = src[1] * k;
    dst[2] = src[2] * k;
}

static __inline__ void CopyRow(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_19C988(float *d, float *s)
{
    ScaleRow(d, s, 1.5f);
    ScaleRow(d + 3, s + 4, 0.75f);
    CopyRow(d + 6, s + 8);
    CopyRow(d + 9, s + 12);
    d[10] = d[10] + 2.0f;
}
