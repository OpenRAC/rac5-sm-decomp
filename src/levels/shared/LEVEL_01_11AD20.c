/* LEVEL_01:0x11AD20 -- ray versus sphere test within a maximum distance. */
extern float sqrtf(float x);

int func_11AD20(float *o, float *dir, float *c, float maxT, float r2)
{
    float dx, dy, dz;
    float dd, b, disc, s, t1, t2;

    dx = o[0] - c[0];
    dy = o[1] - c[1];
    dz = o[2] - c[2];
    dd = dx * dx + dy * dy + dz * dz;
    b = dir[0] * dx + dir[1] * dy + dir[2] * dz;
    disc = b * b + r2 - dd;
    if (disc < 0.0f) {
        return 0;
    }
    s = sqrtf(disc);
    t1 = -b - s;
    if (maxT < t1) {
        return 0;
    }
    if (!(t1 < 0.0f)) {
        return 1;
    }
    t2 = -b + s;
    if (0.0f <= t2) {
        return 1;
    }
    return 0;
}
