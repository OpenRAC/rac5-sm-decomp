/* LEVEL_10:0x1755D8 -- returns a scaled reciprocal of a vector dot product, or a fixed cap. */

float func_1755D8(char *o)
{
    float *v;
    float *w;
    float k;
    float dot;

    k = *(float *)(o + 0xE0);
    if (k < 0.001f) {
        return 0.0f;
    }
    v = (float *)(o + 0x14);
    w = (float *)(o + 0xC0);
    dot = v[0] * w[0] + v[1] * w[1] + v[2] * w[2];
    if (-0.0001f < dot) {
        return 1000.0f;
    }
    return (k * 0.033333335f) / -dot;
}
