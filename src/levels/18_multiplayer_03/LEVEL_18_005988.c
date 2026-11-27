/* LEVEL_18:0x005988 -- placement copy of LEVEL_01_005D30.c: steps a point along a direction by a time offset and returns the remaining time after a probe, minus a margin unless the end is reached. */
extern float func_01C060(float *p, float *q, int a, int b, int c, float f0, float f1, float f2);

float func_005988(float *pos, float *dir, float total, float t, float lo, float hi)
{
    float p[3];

    p[0] = pos[0] + dir[0] * t;
    p[1] = pos[1] + dir[1] * t;
    p[2] = pos[2] + dir[2] * t;
    t = t + func_01C060(p, dir, 0x1020, 0, 0x10, total - t, (hi - lo) * (t / total) + lo, hi);
    if (t < total - 0.009999999776482582f) {
        return t - 0.10000000149011612f;
    }
    return total;
}
