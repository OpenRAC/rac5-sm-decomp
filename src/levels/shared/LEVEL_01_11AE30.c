/* LEVEL_01:0x11AE30 -- tests whether a ray offset along the Y axis reaches within range of a sphere test. */
extern float sqrtf(float x);

int func_11AE30(float *a, float *b, float range, float k)
{
    float dx, dy, dz;
    float disc;
    float len2;
    float s;
    float t;

    dx = a[0] - b[0];
    dy = a[1] - b[1];
    dz = a[2] - b[2];
    len2 = dx * dx + dy * dy + dz * dz;
    disc = (-dy) * (-dy) + k - len2;
    if (disc < 0.0f) {
        return 0;
    }
    s = sqrtf(disc);
    t = dy - s;
    if (range < t) {
        return 0;
    }
    if (t < 0.0f) {
        return 0.0f <= dy + s;
    }
    return 1;
}
